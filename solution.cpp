#include <iostream>
#include <Solution.hpp>
#include <handle_IO.hpp>

int main()
{
    std::vector<Solution> sample{
        {"MILK", "OHIO", "OKLAHOMA"},
        {"HABIT OF USE", "DISTRICT OF COLUMBIA", "NORTHERN MARIANA ISLANDS"}};

    write_solutions(sample);
}
