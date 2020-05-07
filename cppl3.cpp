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

void cinValueAlsoCapturesNewline()
{
    std::cout << "Pick 1 of 2: ";
    int choise{};
    std::cin >> choise;
    //cin not only captures the value, it also captures the newline

    std::cin.ignore(32767, '\n');
    // ignore up to 32767 characters until a \n is removed
    /*
    That tells std::cin.ignore() how many characters to ignore up to.
    We picked that number because it’s the largest signed value guaranteed
    to fit in a (2-byte) integer on all platforms.

    #include <limits>
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    ignore unlimited characters until a \n is removed
    */

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << ", you picked " << choise << std::endl;
}

void appendingStrings()
{
    std::string a{ "45" };
    std::string b{ "11" };

    std::cout << a + b << std::endl;
    a += " volts";
    std::cout << a << std::endl;
}

void nameLenght()
{
    std::string myName{ "Paul" };
    std::cout << myName << " has " << myName.length() << " charactors \n";
}

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

void use_erase()
{
    std::string str{ "The rice is cooking" };

    str.erase(4, 11);// "The king"

    std::cout << str << '\n';
}

void use_replace()
{
    std::string str{ "I saw a red car yesterday." };

    str.replace(8, 3, "blue");

    std::cout << str << '\n'; // I saw a blue car yesterday.
}



