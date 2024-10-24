#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

int main() {
    std::ifstream inputFile;
    inputFile.open("data.txt", std::ios::in);
    std::map<std::string, std::string> birthdays; // Map to store names and birthday dates

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open file!" << std::endl;
        return 1;
    }

    std::string line;
    // Read each line from the file
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string firstName, lastName, date;
        // Extract first name, last name, and date from the line
        iss >> firstName >> lastName >> date;
        std::string fullName = firstName + " " + lastName;
        // Store full name and date in the map
        birthdays[fullName] = date;
    }

    // Close the file
    inputFile.close();

    // Querying the collection
    std::string query;
    std::cout << "Enter a first name to find birthday date: ";
    std::getline(std::cin, query);

    // Search the map for the first name
    bool found = false;
    for (const auto& pair : birthdays) {
        if (pair.first.find(query) == 0) { // Check if the first name matches
            std::cout << "Birthday date for " << pair.first << " is: " << pair.second << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Name not found!" << std::endl;
    }

    return 0;
}
