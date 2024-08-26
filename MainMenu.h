// Name: Mathew Masar
// Assignment: Project 3
// 8/21/24
#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>
#include "Grocery.h"

class MainMenu {
private:
    Grocery& grocery; // Reference to the Grocery object

public:
    // Constructor takes in Grocery object
    MainMenu(Grocery& groceryObj) : grocery(groceryObj) {}

    // Function to display the main menu options
    void displayMenu() const;

    // Function to get and validate user input
    int getValidatedInput() const;

    // Methods for each menu option
    void searchItemFrequency() const;
    void displayAllFrequencies() const;
    void displayHistogram() const;
    void exitProgram() const;
};

#endif
