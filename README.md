# Overview

{Important!  Do not say in this section that this is college assignment.  Talk about what you are trying to accomplish as a software engineer to further your learning.}
With this project I wanted to learn the features and syntax of c++. To that end, I wrote a program that used features that would help me understand c++, including classes, inheritance, data structures, and pointers.

{Provide a description the software that you wrote to demonstrate the C++ language.}
This program uses an insertion sort to sort a vector of any type. To do this I created an abstract comparator class with a .compare() method. The insertion sort takes in a vector of pointers of any type, and a comparator of any type. It uses the comparator's .compare() method to compare the items in the vector. Once the sort is finished, a sorted vector is returned.

To demonstrate the sort I created a Car class as well as a vector filled with these objects. The program prints the contents of the original vector along with the pointer to each object. Then the vector is sorted by year, both ascending and descending and printed.

{Describe your purpose for writing this software.}
The purpose for writing this program was to learn the features and syntax of c++. To that end, I wrote a program that used features that would help me understand c++, including classes, inheritance, data structures, and pointers.

{Provide a link to your YouTube demonstration.  It should be a 4-5 minute demo of the software running and a walkthrough of the code.  Focus should be on sharing what you learned about the language syntax.}

[Software Demo Video](https://youtu.be/NGyOIyyUEpI)

# Development Environment

{Describe the tools that you used to develop the software}

{Describe the programming language that you used and any libraries.}
I used c++ with Visual Studio Code for this project. You can go to (https://code.visualstudio.com/docs/cpp/config-msvc) for 
instructions on configuring VS Code to run c++.

# Useful Websites

{Make a list of websites that you found helpful in this project}
* [w3schools c++ section](https://www.w3schools.com/CPP/default.asp)
* [c++ documentation](https://en.cppreference.com/w/)

# Future Work

{Make a list of things that you need to fix, improve, and add in the future.}
* delete dynamically created objects
* allow user input to create objects and choose sort order