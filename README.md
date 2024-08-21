# GroceryTracker
Grocery Tracker: A C++ tool to track and analyze grocery item purchase frequencies.


# Grocery Tracker Project

## Project Overview
The Grocery Tracker project is a C++ application designed to help users keep track of the frequency of grocery items purchased. The program reads data from a file containing a list of grocery items and counts the occurrence of each item. Users can interact with the program through a menu interface to perform various tasks, such as finding the frequency of a specific item, printing all item frequencies, and displaying a histogram of item frequencies.

## Problem Solved
The primary problem this project addresses is the need to efficiently track and analyze grocery purchases. By providing users with a way to count how often they buy certain items, the program helps in managing grocery shopping and understanding purchasing habits. This can be particularly useful for budgeting, planning, and reducing food waste by identifying items that are frequently purchased but perhaps not always used efficiently.

## What I Did Well
One of the strengths of this project was the efficient use of data structures, particularly the `std::map`, to store and retrieve item frequencies. The use of a map allowed for fast lookups, making the program responsive even as the dataset grew. Additionally, the implementation of the `toLowerCase` function ensured that the item frequency tracking was case-insensitive, which improved the accuracy of the data.

## Areas for Improvement
While the project works well, there are a few areas where the code could be enhanced:
- **Error Handling:** Currently, the program assumes that the input file will always be available and correctly formatted. Adding error handling for file operations would make the program more robust.
- **Input Validation:** The program could be improved by adding input validation for user choices in the menu to prevent invalid inputs and enhance user experience.
- **Efficiency:** For large datasets, the program could benefit from optimizations in file reading and data processing to handle large volumes of data more efficiently.

## Challenges and Solutions
The most challenging aspect of this project was designing a flexible and user-friendly menu system that could accommodate various user inputs and provide meaningful output. To overcome this, I implemented a `switch` statement within a loop that continuously prompts the user for input until they choose to exit. This approach made the program more interactive and easier to use. Additionally, I utilized `std::transform` to create the `toLowerCase` function, ensuring that item names were consistently processed, regardless of case.

## Transferable Skills
This project helped reinforce several skills that are highly transferable to other programming tasks:
- **Data Structure Management:** The use of maps for efficient data storage and retrieval is a common requirement in many software applications.
- **File I/O Operations:** Handling file input and output is a critical skill in software development, and this project provided practical experience in reading from and writing to files.
- **User Interface Design:** The menu system developed for this project can be adapted and applied to other command-line applications, making it a valuable tool for creating user-friendly interfaces.

## Maintainability and Adaptability
The program was designed with maintainability and adaptability in mind:
- **Readability:** The code is well-organized and commented, making it easier to understand and modify in the future.
- **Modularity:** The program is structured with functions that handle specific tasks (e.g., `LoadData`, `SaveData`, `GetItemFrequency`), which makes it easier to maintain and extend.
- **Scalability:** The design of the program allows for easy addition of new features, such as sorting items by frequency or adding a graphical user interface (GUI) in the future.

## Conclusion
This project is a strong addition to my portfolio, showcasing my ability to work with C++ and implement practical solutions to everyday problems. The skills and experience gained from this project will be valuable in future software development endeavors.

