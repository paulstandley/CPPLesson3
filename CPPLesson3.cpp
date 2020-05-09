// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"

void accessing_struct_members()
{
    struct Employee
    {
        short id;
        int age;
        double wage;
    };

    Employee joe;
    joe.id = 21;
    joe.age = 68;
    joe.wage = 514.53;

    Employee frank;
    frank.id = 23;
    frank.age = 2;
    frank.wage = 409.60;

    frank.wage += 10.40;

    ++joe.age;

    int totalAge{ joe.age + frank.age };

    if (joe.wage > frank.wage)
    {
        std::cout << "Joe "<< joe.age <<" makes more thank frank\n";
    }
    else if (joe.wage < frank.wage)
    {
        std::cout << "Joe make less than Frank\n";
    }
    else
    {
        std::cout << "Joe and frank make the same\n";
    }
}

int main()
{

    accessing_struct_members();

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
