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

    int x = 5; // decleration
    int y = 6;
    int sum = x + y; // declare sum and make the value stored the value of x + y

    std::cout << "Hello World!" << std::endl;
    std::cout << "It's really windy today\n";

    std::cout << x << " + " << y << " = " << sum; // write the value of sum to the console
    return 0;
}
