// Name: Mathew Masar
// Assignment: Project 3
// 8/21/24

#include "MainMenu.h"
#include "Grocery.h"

// Displays the main menu options to the user
void MainMenu::displayMenu() const {
    std::cout << "\n======= Corner Grocer Item Tracking =======" << std::endl;
    std::cout << "             -  Menu Options  -             \n" << std::endl;
    std::cout << "  1. Search for an item frequency" << std::endl;
    std::cout << "  2. Display all item frequencies" << std::endl;
    std::cout << "  3. Display histogram of item frequencies" << std::endl;
    std::cout << "  4. Exit the program" << std::endl;
    std::cout << "                     ---                     " << std::endl;
    std::cout << "Please enter your choice (1-4): ";
}

// Gets and validates user input for menu selection
int MainMenu::getValidatedInput() const {
    int choice;
    while (true) {
        std::cin >> choice;

        // Validate input to ensure number between 1 and 4
        if (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number between 1 and 4: ";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard any remaining input
            return choice; // Valid input, return the choice
        }
    }
}

// Searches for the frequency of a specific item in the grocery list
void MainMenu::searchItemFrequency() const {
    std::string itemName;
    std::cout << "\nEnter the item name to search: ";
    std::getline(std::cin, itemName);

    // Get the frequency of the item from the grocery object
    int frequency = grocery.getItemFrequency(itemName);

    // Check if the item was found in the grocery list
    if (frequency == 0) {
        std::cout << itemName << " is not a registered product of Corner Grocer." << std::endl;
    }
    else {
        // Check if the last character of itemName is 's' to determine proper grammar
        if (!itemName.empty() && itemName.back() == 's') {
            std::cout << itemName << " were purchased " << frequency << " times." << std::endl;
        }
        else {
            std::cout << itemName << " was purchased " << frequency << " times." << std::endl;
        }
    }
}

// Displays the frequency of all items in the grocery list
void MainMenu::displayAllFrequencies() const {
    std::cout << "            -  Frequency List  -            " << std::endl;
    grocery.printItemFrequencies();
}

// Displays a histogram representing the frequency of each item
void MainMenu::displayHistogram() const {
    const auto& itemMap = grocery.getItemFrequencyMap();

    std::cout << "          -  Frequency Histogram  -          " << std::endl;
    // Iterate through the map and print each item and its corresponding frequency as asterisks
    for (const auto& pair : itemMap) {
        std::cout << pair.first << " " << std::string(pair.second, '*') << std::endl;
    }
}

// Exit the program message
void MainMenu::exitProgram() const {
    std::cout << "\nExiting the program..." << std::endl;
}
