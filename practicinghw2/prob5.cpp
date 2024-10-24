/* Nahimana Gerard
 CH-231-A.
 gnahimana@constructor.university
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> strings;
    string input;
    while (getline(cin, input) && input != "END") {
        strings.push_back(input);
    }
    if (strings.size() < 5) {
        cout << "One or both of the second and fifth elements do not exist." << endl;
    } else {
        swap(strings[1], strings[4]);
    }
    strings.back() = "???";
    for (size_t i = 0; i < strings.size() - 1; ++i) {
        cout << strings[i] << ',';
    }
    if (!strings.empty()) {
        std::cout << strings.back();
    }
    cout << std::endl;
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