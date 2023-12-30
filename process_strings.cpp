#include <vector>
#include <algorithm>
#include "process_strings.hpp"

std::string capitalize(std::string str)
{
    for (auto &letter : str)
        letter = toupper(letter);

    return str;
}

std::string remove_non_alpha(std::string str)
{
    auto new_ending = std::remove_if(str.begin(), str.end(),
                                     [](char c)
                                     { return !isalpha(c); });
    str.erase(new_ending, str.end());

    return str;
}

// NOTE: assumes that the string has been sorted
std::string reduce_duplicates(std::string str)
{
    std::vector<std::string> substrings;

    // break str into substrings of repeating sequences
    while (!str.empty())
    {
        const auto NEXT_SEQ_POS = str.find_first_not_of(str.front());
        substrings.emplace_back(str.substr(0, NEXT_SEQ_POS));

        if (NEXT_SEQ_POS != std::string::npos)
            str = str.substr(NEXT_SEQ_POS);
        else
            str.clear();
    }

    // perform reduction
    for (auto &seq : substrings)
        if (seq.size() % 2 == 0)
            seq.clear();
        else
            seq.erase(1);

    // re-construct string using reduced substrings
    for (auto reduced : substrings)
        if (!reduced.empty())
            str.append(reduced);

    return str;
}
