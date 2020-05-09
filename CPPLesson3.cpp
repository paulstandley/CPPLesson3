// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"


struct Point3d
{
    double x;
    double y;
    double z;
};

Point3d getZeroPoint()
{
    // We can create a variable and return the variable.
    Point3d temp{ 0.0, 0.0, 0.0 };
    return temp;
}

Point3d getZeroPoint2()
{
    // We can return directly. We already specified the type
    // at the function declaration (Point3d), so we don't need
    // it again here.
    return { 0.0, 0.0, 0.0 };
}

Point3d getZeroPoint3()
{
    // We can use empty curly braces to zero-initialize all
    // members of `Point3d`.
    return {};
}


int main()
{
 
    Point3d zero{ getZeroPoint() };

    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
        std::cout << "The point is zero\n";
    else
        std::cout << "The point is not zero\n";

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
