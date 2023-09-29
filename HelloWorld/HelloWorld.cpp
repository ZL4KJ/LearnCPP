// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // This is a single-line comment.

    /* 
        This is a 
        multi-line
        comment
    */
    // integers (Store whole numbers ex: 0-65535)
    int x = 5; // decleration
    int y = 6;
    int sum = x + y; // declare sum and make the value stored the value of x + y

    //doubles (number including decimal)
    double price = 21.99;
    double temperature = 21.5;
    
    // single character
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    // boolean (true or false, 1 or 0)
    bool apphasRun = false;

    // string (objects that represent a sequence of text)
    std::string day = "Friday";
    std::string welcomeMessage = "Welcome to the sample hello world C++ Application.";

    std::cout << welcomeMessage << std::endl; // display the welcome message string to the console adding a carriage return.

    std::cout << "Hello World!" << std::endl;
    std::cout << "It's really windy today\n";

    std::cout << x << " + " << y << " = " << sum << std::endl; // write equation and then the value of sum to the console
    
    std::cout << "the cost of this code is " << dollarSign << price; // output a string including some variables
    std::cout << ", but only on " << day << std::endl; // append this to the previous lines output then add a carriage return.

    if (apphasRun) { // this will only display if the apphasRun is set to true.
        std::cout << "apphasRun Value = " << apphasRun << std::endl;
        std::cout << "The app has run is true " << std::endl;
    }
    
    return 0;
}
