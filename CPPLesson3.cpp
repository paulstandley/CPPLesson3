// CPPLesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"


/*
1) You are running a website, and you are trying to keep track of how much money you make 
per day from advertising. Declare an advertising struct that keeps track of how many ads 
you’ve shown to readers, what percentage of ads were clicked on by users, and how much you 
earned on average from each ad that was clicked. Read in values for each of these fields 
from the user. Pass the advertising struct to a function that prints each of the values,
and then calculates how much you made for that day (multiply all 3 fields together).
*/

struct Advertising_money
{
    double ads_shown_to_readers;
    double percentage_ads_clicked;
    double average_of_each_clicked;
};

double read_value_user()
{
    std::cout << "Enter value ";
    double value{};
    std::cin >> value;
    return value;
}

void prints_each_values_calculate(Advertising_money advertising_money)
{
    std::cout << "ads_shown_to_readers " << advertising_money.ads_shown_to_readers << '\n';
    std::cout << "average_of_each_clicked " << advertising_money.average_of_each_clicked << '\n';
    std::cout << "percentage_ads_clicked " << advertising_money.percentage_ads_clicked << '\n';
    std::cout << "total for day " <<
        ((advertising_money.ads_shown_to_readers * advertising_money.average_of_each_clicked 
            / 100 * advertising_money.percentage_ads_clicked));
}


int main()
{
    Advertising_money advertising_money{};

    advertising_money.ads_shown_to_readers = read_value_user();
    advertising_money.average_of_each_clicked = read_value_user();
    advertising_money.percentage_ads_clicked = read_value_user();

    prints_each_values_calculate(advertising_money);
    

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
