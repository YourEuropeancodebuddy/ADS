#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> strings;
    std::string input;
    while (std::getline(std::cin, input) && input != "END") {
        strings.push_back(input);
    }
    if (strings.size() < 5) {
        std::cout << "One or both of the second and fifth elements do not exist." << std::endl;
    } else {
        std::swap(strings[1], strings[4]);
    }
    strings.back() = "???";
    for (size_t i = 0; i < strings.size() - 1; ++i) {
        std::cout << strings[i] << ',';
    }
    if (!strings.empty()) {
        std::cout << strings.back();
    }
    std::cout << std::endl;
    for (auto it = strings.begin(); it != strings.end(); ++it) {
        if (it != strings.begin()) {
            std::cout << ';';
        }
        std::cout << *it;
    }
    std::cout << std::endl;
    for (auto it = strings.rbegin(); it != strings.rend(); ++it) {
        std::cout << *it << ' ';
    }
    return 0;
}