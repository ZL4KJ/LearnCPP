/*
	Sample math functions to find the hypotenuse of a triangle
	using the power (pow) and Square Root (sqrt) functions from the cmath library.
*/
#include <iostream>
#include <cmath> // Provides math functions.

int main()
{
	double a;
	double b;
	double c;

	std::cout << "Enter side A: "; 
	std::cin >> a;  // ask the user for the first side of the triangle.

	std::cout << "Enter side B: ";
	std::cin >> b; // ask the user for the second side of the triangle.

	c = sqrt(pow(a, 2) + pow(b, 2)); // calculate the sqrt of both provided sides using c = sqrt(a^2 + b^2) 

	std::cout << "Side C = " << c << std::endl; // Display the result of the equation and the value of side C

	return 0;
}