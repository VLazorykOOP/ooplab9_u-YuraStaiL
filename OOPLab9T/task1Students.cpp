#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <fstream>


struct Student {
    std::string lastName;
    int schoolNumber;
    int admissionYear;
};


void task1Students() {
    std::vector<Student> students = {
    {"ivanov", 1, 2022},
    {"lipka", 1, 2022},
    {"sidr", 1, 2022},
    {"kartop", 1, 2023},
    {"simin", 2, 2022},
    {"lobka", 2, 2022},
    {"petroskov", 2, 2023},
    {"petroskov", 6, 2021}
    };

    std::map<int, std::map<int, std::vector<std::string>, std::greater<int>>> school_year_map;

    for (const auto& student : students) {
        school_year_map[student.schoolNumber][student.admissionYear].push_back(student.lastName);
    }

    for (const auto& school : school_year_map) {
        for (const auto& year : school.second) {
            std::cout << "School: " << school.first << ", Year: " << year.first << std::endl;
            int counter = 0;
            for (const auto& lastName : year.second) {
                if (counter >= 3) {
                    break;
                }
                std::cout << lastName << std::endl;
                counter++;
            }
            std::cout << std::endl;
        }
    }
}