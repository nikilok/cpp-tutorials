#include <iostream>

using namespace std;

enum Sex
{
    Male,
    Female,
    Other
};

string gender(Sex sex)
{
    switch (sex)
    {
    case Sex::Male:
        return "Mr. ";
    case Sex::Female:
        return "Miss. ";
    case Sex::Other:
        return "Mx. ";
    default:
        return "";
    }
}

void greet(string first_name, string second_name, Sex sex)
{
    string abbr = gender(sex);
    if (first_name == "navya")
    {
        cout << "Welcome cutie pie to the program " + abbr + second_name + " " + first_name + "\n";
        return;
    }

    cout << "Welcome to the program " + abbr + second_name + " " + first_name + "\n";
}
