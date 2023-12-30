#include <handle_IO.hpp>
#include <fstream>
#include <algorithm>

std::string adjust_component(std::string component)
{
    // keep chars, discard rest
    auto new_ending = std::remove_if(component.begin(), component.end(),
                                     [](char c)
                                     { return !isalpha(c); });
    component.erase(new_ending, component.end());

    // convert to all uppercase
    for (char &letter : component)
        letter = toupper(letter);

    std::sort(component.begin(), component.end());

    return component;
}

std::vector<std::string> read_anagrams()
{
    std::ifstream input_file(ANAGRAMS_FILE);
    std::vector<std::string> anagrams;
    std::string anagram;

    const std::size_t WHITESPACE_OFFSET = 4;
    while (std::getline(input_file, anagram))
    {
        // discard leading whitespace and chars after anagram
        const auto ANAGRAM_LEN = anagram.find(" =") - WHITESPACE_OFFSET;
        anagram = anagram.substr(WHITESPACE_OFFSET, ANAGRAM_LEN);

        anagrams.emplace_back(anagram);
    }

    return anagrams;
}

std::vector<std::string> read_territories()
{
    std::ifstream input_file(REMAINING_TERRITORIES);
    std::vector<std::string> territories;
    std::string territory;

    while (std::getline(input_file, territory, ','))
    {
        const auto START = territory.find_first_not_of(' ');
        territories.emplace_back(territory.substr(START));
    }

    return territories;
}
