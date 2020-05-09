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

void enumerator_scope()
{
    /*
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
        //Consequently, it’s common to prefix enumerators with a standard prefix like ANIMAL_ or COLOR_,
        //both to prevent naming conflicts and for code documentation purposes
    */
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

    int mypet = ANIMAL_PIG;
    std::cout << ANIMAL_HORSE;
    // evaluates to integer before being passed to std::cout
    // Animal animal = 5; // will cause compiler error
    // However, you can force it to do so via a static_cast:
    // Color color = static_cast<Color>(5); // ugly

    // Use an 8 bit unsigned integer as the enum base.
    enum Color : std::uint_least8_t
    {
        COLOR_BLACK, // assigned 0
        COLOR_RED, // assigned 1
        COLOR_BLUE, // assigned 2
        COLOR_GREEN, // assigned 3
        COLOR_WHITE, // assigned 4
        COLOR_CYAN, // assigned 5
        COLOR_YELLOW, // assigned 6
        COLOR_MAGENTA // assigned 7
    };

    // Color color;
    // std::cin >> color; // will cause compiler error
    // One workaround is to read in an integer, 
    // and use a static_cast to force the compiler to put an integer value  into an enumerated type:
    // int inputColor;
    // std::cin >> inputColor;
    // Color color{ static_cast<Color>(inputColor) };
}


