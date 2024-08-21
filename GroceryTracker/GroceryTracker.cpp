#include "GroceryTracker.h"
#include <algorithm>

std::string toLowerCase(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

void GroceryTracker::LoadData() {
    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");
    std::string item;
    while (inputFile >> item) {
        itemFrequency[toLowerCase(item)]++;
    }
    inputFile.close();
}

void GroceryTracker::SaveData() {
    std::ofstream outputFile("frequency.dat");
    for (const auto& pair : itemFrequency) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }
    outputFile.close();
}

int GroceryTracker::GetItemFrequency(const std::string& item) {
    return itemFrequency[toLowerCase(item)];
}

void GroceryTracker::PrintFrequencies() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

void GroceryTracker::PrintHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void GroceryTracker::Menu() {
    int choice;
    std::string item;
    do {
        std::cout << "1. Find frequency of an item\n";
        std::cout << "2. Print all item frequencies\n";
        std::cout << "3. Print histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1:
            std::cout << "Enter item: ";
            std::cin >> item;
            std::cout << item << ": " << GetItemFrequency(item) << std::endl;
            break;
        case 2:
            PrintFrequencies();
            break;
        case 3:
            PrintHistogram();
            break;
        case 4:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
}
