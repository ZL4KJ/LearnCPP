#include <iostream>

int main()
{
	// switch = alternative to using many else if statments.
	//          compare one value against matching cases

	int month;
	std::cout << "Enter the month (1-12): ";
	std::cin >> month;

	switch(month)
	{
		case 1: // Case found to be true
			std::cout << "It is January"; // do something for case 1
			break; // break from the switch routine as we have done what we need to do
		case 2:
			std::cout << "It is February";
			break;
		case 3:
			std::cout << "It is March";
			break;
		case 4:
			std::cout << "It is April";
			break;
		case 5:
			std::cout << "It is May";
			break;
		case 6:
			std::cout << "It is June";
			break;
		case 7:
			std::cout << "It is July";
			break;
		case 8:
			std::cout << "It is August";
			break;
		case 9:
			std::cout << "It is September";
			break;
		case 10:
			std::cout << "It is October";
			break;
		case 11:
			std::cout << "It is November";
			break;
		case 12:
			std::cout << "It is December";
			break;
		default: // If no matching cases found, do something to tell the user.
			std::cout << "You entered a value outside the requirements.\n\nPlease enter only numbers 1-12\n\n";
	}
}