#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include <fstream>

void find_unique_numbers(const std::string& name, const std::vector<int>& V) {
    std::set<int, std::greater<int>> first_half(V.begin(), V.begin() + V.size() / 2);
    std::set<int, std::greater<int>> second_half(V.begin() + V.size() / 2, V.end());

    std::vector<int> unique_numbers;
    std::set_difference(second_half.begin(), second_half.end(),
        first_half.begin(), first_half.end(),
        std::back_inserter(unique_numbers),
        std::greater<int>());

    std::ofstream output_file(name);
    std::ostream_iterator<int> output_iterator(output_file, "\n");
    std::copy(unique_numbers.begin(), unique_numbers.end(), output_iterator);
}

void task3() {
    std::string name = "output.txt";
    std::vector<int> V = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::cout << "Complete";
    find_unique_numbers(name, V);
}
