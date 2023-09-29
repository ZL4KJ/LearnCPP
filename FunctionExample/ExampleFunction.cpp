#include <iostream>
#include <ctime>

using std::string;
using std::cout;
using std::cin;

// declare the function name and accepted parameters.
void happyBirthday(string name, int age);

// Main entry point for the program.
int main()
{
    string name;
    int age = 21;

    // ask the user for the arguments to pass to the happyBirthday function.
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    // call the happyBirthday function and pass in the arguments provided by the user.
    happyBirthday(name, age);

    return 0;
}

// define the happyBirthday function
void happyBirthday(string name, int age) {
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday dear " << name << "\n";
    std::cout << "Happy Birthday to you\n";
    std::cout << "You are " << age << " years old";
}