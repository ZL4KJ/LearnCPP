#include <iostream>

int main()
{
	double temp;
	char unit;

	std::cout << "Temperature Conversion\n\n";
	std::cout << "F = Fahrenheit\n";
	std::cout << "C = Celcius\n";
	std::cout << "What unit would you like to convert to: ";
	std::cin >> unit;

	if (unit == 'F' || unit == 'f')
	{
		std::cout << "Enter the temperature in Celcius: ";
		std::cin >> temp;
		temp = (1.8 * temp) + 32;
		std::cout << "Temperature is " << temp << "­ F\n";
	}
	else if (unit == 'C' || unit == 'c') 
	{
		std::cout << "Enter the temperature in Fahrenheit: ";
		std::cin >> temp;
		temp = (temp - 32) / 1.8;
		std::cout << "The temperature in Celsius is " << temp << " C";
	}
	else {
		std::cout << "You must enter a valid unit to convert too. Either C or F";
	}

	return 0;
}