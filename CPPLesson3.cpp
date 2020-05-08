// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"

/*Write a program that asks the user to enter their full name and their age. 
As output, tell the user how many years they’ve lived for each letter in 
their name (for simplicity, count spaces as a letter).*/

void define_enum()
{
    // Define a new enumeration named Color
    enum Color
    {
        // Here are the enumerators
        // These define all the possible values this type can hold
        // Each enumerator is separated by a comma, not a semicolon
        COLOR_BLACK,
        COLOR_RED,
        COLOR_BLUE,
        COLOR_GREEN,
        COLOR_WHITE,
        COLOR_CYAN,
        COLOR_YELLOW,
        COLOR_MAGENTA, // see note about trailing comma on the last enumerator below
    }; // however the enum itself must end with a semicolon

    // Define a few variables of enumerated type Color
    Color paint = COLOR_WHITE;
    Color house(COLOR_BLUE);
    Color apple{ COLOR_RED };
}

void enumerator_scope()
{
    enum Color
    {
        RED,
        BLUE, // BLUE is put into the enumerator_scope namespace
        GREEN
    };

    enum Feeling
    {
        HAPPY,
        TIRED,
        BLUE // error, BLUE was already used in enum Color in the enumerator_scope namespace
    };
    /*Consequently, it’s common to prefix enumerators with a standard prefix like ANIMAL_ or COLOR_, 
    both to prevent naming conflicts and for code documentation purposes*/
}

void enumerator_values()
{
    // define a new enum named Animal
    enum Animal
    {
        ANIMAL_CAT = -3,
        ANIMAL_DOG, // assigned -2
        ANIMAL_PIG, // assigned -1
        ANIMAL_HORSE = 5,
        ANIMAL_GIRAFFE = 5, // shares same value as ANIMAL_HORSE
        ANIMAL_CHICKEN // assigned 6
    };
    // Don’t assign specific values to your enumerators.
    // Don’t assign the same value to two enumerators in the same enumeration unless there’s a very good reason.
}



int main()
{


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
