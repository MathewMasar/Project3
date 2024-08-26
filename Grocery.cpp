// Name: Mathew Masar
// Assignment: Project 3
// 8/21/24
#include "Grocery.h"

// Loads items from the input file and populates the item frequency map
void Grocery::loadItemsFromFile(std::ifstream& inputFile) {
    std::string item;
    while (inputFile >> item) {
        addItem(item); // Add item to the map, incrementing its frequency
    }

    std::cout << "Data input successful..." << std::endl;
}

// Adds an item to the frequency map, incrementing its count if it already exists
void Grocery::addItem(const std::string& itemName) {
    itemFrequency[itemName]++;
}

// Retrieves the frequency of a specific item from the map
int Grocery::getItemFrequency(const std::string& itemName) const {
    // Find the item in the map
    auto it = itemFrequency.find(itemName);

    // If the item is found, return its frequency; otherwise, return 0
    if (it != itemFrequency.end()) {
        return it->second;
    }
    return 0;
}

// Prints all items and their frequencies from the map
void Grocery::printItemFrequencies() const {
    // Iterate through the map and print each item and its frequency
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

// Backs up the item frequency data to a file
void Grocery::backupData(std::ofstream& backupFile) const {
    // Write item frequencies to the backup file
    for (const auto& pair : itemFrequency) {
        backupFile << pair.first << " " << pair.second << std::endl;
    }

    std::cout << "Data successfully backed up... " << std::endl;
}

// Returns a constant reference to the item frequency map
const std::map<std::string, int>& Grocery::getItemFrequencyMap() const {
    return itemFrequency;
}
