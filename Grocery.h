// Name: Mathew Masar
// Assignment: Project 3
// 8/21/24
#ifndef GROCERY_H
#define GROCERY_H

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class Grocery {
private:
    std::map<std::string, int> itemFrequency;

public:
    // Method to read the file and populate the map
    void loadItemsFromFile(std::ifstream& inputFile);

    // Method to add an item to the map
    void addItem(const std::string& itemName);

    // Method to get the frequency of an item
    int getItemFrequency(const std::string& itemName) const;

    // Method to print all item frequencies
    void printItemFrequencies() const;

    // Method to backup data to an already opened file
    void backupData(std::ofstream& backupFile) const;

    // Method to get the entire item frequency map
    const std::map<std::string, int>& getItemFrequencyMap() const;
};

#endif
