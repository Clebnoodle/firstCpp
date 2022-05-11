# Overview

With this project I wanted to learn the features and syntax of c++. To that end, I wrote a program that used features that would help me understand c++, including classes, inheritance, data structures, and pointers.

This program uses an insertion sort to sort a vector of any type. To do this I created an abstract comparator class with a .compare() method. The insertion sort takes in a vector of pointers of any type, and a comparator of any type. It uses the comparator's .compare() method to compare the items in the vector. Once the sort is finished, a sorted vector is returned.

To demonstrate the sort I created a Car class as well as a vector filled with these objects. The program prints the contents of the original vector along with the pointer to each object. Then the vector is sorted by year, both ascending and descending and printed.

The purpose for writing this program was to learn the features and syntax of c++. To that end, I wrote a program that used features that would help me understand c++, including classes, inheritance, data structures, and pointers.


[Software Demo Video](https://youtu.be/NGyOIyyUEpI)

# Development Environment

I used c++ with Visual Studio Code for this project. You can go to https://code.visualstudio.com/docs/cpp/config-msvc for 
instructions on configuring VS Code to run c++.

# Useful Websites

* [w3schools c++ section](https://www.w3schools.com/CPP/default.asp)
* [c++ documentation](https://en.cppreference.com/w/)

# Future Work

* delete dynamically created objects
* allow user input to create objects and choose sort order