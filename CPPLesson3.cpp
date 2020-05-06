// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


void getNameAndAgeCIN()
{
    std::cout << "Enter full Name: ";
    std::string name{};
    std::cin >> name;// cin brakes on whitespaces

    std::cout << "Enter your age: ";
    std::string age{};
    std::cin >> age;// so age is the last name

    std::cout << "Your name is " << name << " and your age is " << age << std::endl;
}

void getNameAndAgeGetinline()
{
    std::cout << "Enter full name: ";
    std::string name{};
    std::getline(std::cin, name);//read a full line of text

    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin, age);

    std::cout << "Your name is " << name << " your age is " << age << std::endl;
}

int main()
{

    getNameAndAgeGetinline();

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
