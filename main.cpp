// Name: Mathew Masar
// Assignment: Project 3
// 8/21/24
#include "Grocery.h"
#include "MainMenu.h"

int main() {
    
    std::string terminated = "Program terminated.\nCorner Grocer 2024\n===========================================";
    std::string filename = "CS210_Project_Three_Input_File.txt";
    std::ifstream inputFile(filename);

    // Check if the input file was opened successfully
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        std::cout << terminated << std::endl;
        return 1; // Exit if the file cannot be opened
    }

    // Create instance of grocery object
    Grocery grocery;

    // Load items from the already opened file
    grocery.loadItemsFromFile(inputFile);

    // Close the input file
    inputFile.close();

    // Open the backup file
    std::string backupFilename = "frequency.dat";
    std::ofstream backupFile(backupFilename);

    // Check if the backup file was opened successfully
    if (!backupFile.is_open()) {
        std::cerr << "Error: Could not open or create backup file " << backupFilename << std::endl;
        std::cout << terminated << std::endl;
        return 1; // Exit if the file cannot be opened or created
    }

    // Backup data to the already opened file
    grocery.backupData(backupFile);

    // Close the backup file
    backupFile.close();

    // Initialize the MainMenu with the loaded Grocery object
    MainMenu menu(grocery);

    // Loop to display the menu and process user input
    bool running = true;
    while (running) {
        menu.displayMenu();
        int choice = menu.getValidatedInput();

        switch (choice) {
        case 1:
            menu.searchItemFrequency();
            break;
        case 2:
            menu.displayAllFrequencies();
            break;
        case 3:
            menu.displayHistogram();
            break;
        case 4:
            menu.exitProgram();
            running = false; // Escapes while loop to exit program
            break;
        }
    }

    // Display termination message
    std::cout << terminated << std::endl;

    return 0;
}
