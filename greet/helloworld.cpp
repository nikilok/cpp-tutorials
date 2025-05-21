#include <iostream>
#include <vector>
#include <string>
#include "greet.h"

using namespace std;

int main()
{
    string first_name;
    string second_name;
    int age;
    vector<string> msg{"Please", "enter", "your", "full name\n"};
    char sex_input;
    Sex sex_value;
    bool confirm_sex;

    for (const string word : msg)
    {
        cout << word << " ";
    }
    cin >> first_name >> second_name;
    cout << "How old are you " + first_name + " ?";
    cin >> age;

    cout << "Please confirm your sex [m - (male)/f - (female)/o - (other)]:";
    cin >> sex_input;

    if (sex_input == 'm')
    {
        sex_value = Sex::Male;
    }
    else if (sex_input == 'f')
    {
        sex_value = Sex::Female;
    }
    else if (sex_input == 'o')
    {
        sex_value = Sex::Other;
    }
    else
    {
        cout << "Invalid input for sex. Defaulting to Other.\n";
        sex_value = Sex::Other;
    }

    if (age < 18)
    {
        cout << "Your below age \n";
        return 0;
    }
    else
    {
        greet(first_name, second_name, sex_value);
    }
}
