/*
	Example to convert temperatures from / to Fahrenheit & Celcius 
*/
#include <iostream>

int main()
{
	double temp; // define the variable to store the temperature.
	char unit; // define the variable to store the unit we are converting to.

	std::cout << "Temperature Conversion\n\n";
	std::cout << "F = Fahrenheit\n";
	std::cout << "C = Celcius\n";
	std::cout << "What unit would you like to convert to: ";
	std::cin >> unit; // read the variable unit to convert to. C or F

	if (unit == 'F' || unit == 'f') // If the unit selected is Fahrenheit
	{
		std::cout << "Enter the temperature in Celcius: ";
		std::cin >> temp;
		temp = (1.8 * temp) + 32; // reassign the temp with the calculated result
		std::cout << "Temperature is " << temp << "­ F\n";
	}
	else if (unit == 'C' || unit == 'c') // If the unit selected is Celsius
	{
		std::cout << "Enter the temperature in Fahrenheit: ";
		std::cin >> temp;
		temp = (temp - 32) / 1.8; // reassign the temp value with the calculated result
		std::cout << "The temperature in Celsius is " << temp << " C";
	}
	else { // if C or F is not chosen, display an error message.
		std::cout << "You must enter a valid unit to convert too. Either C or F";
	}

	return 0;
}