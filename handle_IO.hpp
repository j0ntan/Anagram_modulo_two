#pragma once
#include <string>
#include <vector>

const char ANAGRAMS_FILE[] = "anagrams.txt";
const char REMAINING_TERRITORIES[] = "remaining_territories.txt";

std::vector<std::string> read_anagrams();

std::vector<std::string> read_territories();
