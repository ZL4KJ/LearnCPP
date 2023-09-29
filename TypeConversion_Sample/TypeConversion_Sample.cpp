#include <iostream>
/*
	type conversion = conversion of a value of one data type to another.
		Implicit = automatic
		Explicit = Preced value with a new data type (int)
*/

int main()
{
	double x = (int) 3.14;

	char y = 100;

	int correct = 8;
	int questions = 10;
	double score = correct / (double)questions * 100; // without (double) preceeding questions we get 0% as the result is 0.8

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	std::cout << score << "%";
	return 0;
 }