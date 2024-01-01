#pragma once
#include <string>
#include <vector>
#include <Solution.hpp>

const char ANAGRAMS_FILE[] = "anagrams.txt";
const char REMAINING_TERRITORIES[] = "remaining_territories.txt";
const char SOLUTIONS[] = "solutions.txt";

std::vector<std::string> read_anagrams();

std::vector<std::string> read_territories();

void write_solutions(const std::vector<Solution> &solutions);
