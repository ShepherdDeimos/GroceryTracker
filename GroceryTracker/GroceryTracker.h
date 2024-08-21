#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency; // Map to store item frequencies

public:
    void LoadData();           // Load data from input file
    void SaveData();           // Save data to frequency.dat
    int GetItemFrequency(const std::string& item); // Get frequency of a specific item
    void PrintFrequencies();   // Print all item frequencies
    void PrintHistogram();     // Print histogram of item frequencies
    void Menu();               // Display menu and handle user input
};

