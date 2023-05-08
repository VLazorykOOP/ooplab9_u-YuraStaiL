#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <fstream>


void task2List() {
    std::vector<int> L = { 5, 3, -2, 1, -4, 0, 7 };

    auto neg_it = std::find_if(L.begin(), L.end(), [](int x) { return x < 0; });
    if (neg_it != L.end()) {
        L.insert(++neg_it, 0);
    }

    auto pos_it = std::find_if(L.rbegin(), L.rend(), [](int x) { return x > 0; });
    if (pos_it != L.rend()) {
        L.insert((++pos_it).base(), 0);
    }

    // Выводим список на экран
    for (int x : L) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}