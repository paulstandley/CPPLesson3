// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"

/*Write a program that asks the user to enter their full name and their age. 
As output, tell the user how many years they’ve lived for each letter in 
their name (for simplicity, count spaces as a letter).*/


void years_for_each_letter_in_your_name()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    double age{};
    std::cin >> age;

    double name_length{ static_cast<double>(name.length()) };

    double value{ age / name_length };

    std::cout << "You have lived " << value << " years for each letter in your name." << std::endl;

}

int main()
{
    years_for_each_letter_in_your_name();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
