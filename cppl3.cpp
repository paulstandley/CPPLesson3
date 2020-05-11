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


void enum_uses_case()
{
    /*
    enum ItemType
    {
        ITEMTYPE_SWORD,
        ITEMTYPE_TORCH,
        ITENTYPE_POTION
    };

    std::string getItemName(ItemType itemType)
    {
        if (itemType == ITEMTYPE_SWORD)
            return "Sword";
        if (itemType == ITEMTYPE_TORCH)
            return "Torch";
        if (itemType == ITENTYPE_POTION)
            return "Potion";

        return "Hay";
    }
        ItemType itemtype = ITEMTYPE_SWORD;

        std::cout << "You are carring a " << getItemName(itemtype) << '\n';

    */
}

void enum_class()
{
    enum class Color
    {
        red,
        blue
    };

    Color color{ Color::red };

    if (color == Color::red)
        std::cout << "The color is red. Its int value is " << static_cast<int>(color) << '\n';
    else if (color == Color::blue)
        std::cout << "The color is blue. Its int value is " << static_cast<int>(color) << '\n';
}

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
        std::cout << "Joe " << joe.age << " makes more thank frank\n";
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

/*
namespace Initializing_structs
{
    struct Employee_1
    {
        short id;
        int age;
        double wage;
    };

    void printImformation(Employee_1 employee)
    {
        std::cout << "ID:   " << employee.id << '\n';
        std::cout << "Age:  " << employee.age << '\n';
        std::cout << "Wgae: " << employee.wage << '\n';
    }

}

void print_initializing_structs()
{
    //Initializing structs
    Initializing_structs::Employee_1 joe{ 14, 32, 24.15 };
    Initializing_structs::Employee_1 frank{ 15, 28, 18.27 };

    // Print infomation
    Initializing_structs::printImformation(joe);
    std::cout << '\n';
    Initializing_structs::printImformation(frank);

}
*/

void structsand_functions()
{
    /*
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
    */
}

/*
#include "pch.h"
#include <iostream>
#include <string>
#include "CPPLesson3.h"



1) You are running a website, and you are trying to keep track of how much money you make
per day from advertising. Declare an advertising struct that keeps track of how many ads
you’ve shown to readers, what percentage of ads were clicked on by users, and how much you
earned on average from each ad that was clicked. Read in values for each of these fields
from the user. Pass the advertising struct to a function that prints each of the values,
and then calculates how much you made for that day (multiply all 3 fields together).

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
*/


