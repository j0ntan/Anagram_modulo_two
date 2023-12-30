#include <iostream>
#include <handle_IO.hpp>

int main()
{
    std::cout << "list of resulting anagrams\n";
    std::cout << "===\n";
    auto anagrams = read_anagrams();
    for (auto anagram : anagrams)
        std::cout << anagram << '\n';

    std::cout << "\nlist of territories\n";
    std::cout << "===\n";
    auto territories = read_territories();
    for (auto territory : territories)
        std::cout << territory << '\n';
}
