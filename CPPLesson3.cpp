// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"

/*
2) Create a struct to hold a fraction. The struct should have an integer numerator 
and an integer denominator member. 
Declare 2 fraction variables and read them in from the user. 
Write a function called multiply that takes both fractions, multiplies them together, 
and prints the result out as a decimal number. 
You do not need to reduce the fraction to its lowest terms.
*/

struct Fraction
{
    int numerator;
    int denominator;
};
 
Fraction user_input()
{
    Fraction fraction;
    std::cout << "Enter a numarator:   ";
    std::cin >> fraction.numerator;
    std::cout << "Enter a denominator: ";
    std::cin >> fraction.denominator;
    std::cout << '\n';
    return fraction;
}

void multiply(Fraction f1, Fraction f2)
{
    std::cout << static_cast<double>(
        (f1.numerator * f2.numerator) / (f1.denominator * f2.denominator)
        ) << '\n';
}

void print_data()
{
    Fraction f1{ user_input() };
    Fraction f2{ user_input() };
    multiply(f1, f2);
}

int main()
{
    print_data();
    

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
