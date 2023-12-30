#include <iostream>
#include <process_strings.hpp>

int main()
{
    std::string mixed_case = "cAtDOg";
    std::cout << "mixed case: " << mixed_case << '\n';
    std::cout << "upper case: " << capitalize(mixed_case) << "\n\n";

    std::string mixed_chars = "    cat?DoG!@123";
    std::cout << "mixed chars: " << mixed_chars << '\n';
    std::cout << "alpha chars: " << remove_non_alpha(mixed_chars) << "\n\n";

    std::string duplicate_letters = "aaaabbbcccccdee";
    std::cout << "with duplicate letters: " << duplicate_letters << '\n';
    std::cout << "expected result       : bcd\n";
    std::cout << "reduced string        : "
              << reduce_duplicates(duplicate_letters) << "\n\n";
}
