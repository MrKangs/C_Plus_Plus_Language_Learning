// doubleTheNumberRenewVersion.cpp: This program is for chapter 2.2

#include <iostream>

int returnUserInput() {								// Defining a function called returnUserInput() 
	std::cout << "Enter the integer:";				// Same as doubleTheNumber.cpp
	int input{ 0 };
	std::cin >> input;
	return input;									// returning the value as the user inputted
}


int main()
{
	int input(returnUserInput());					// defining a new input value from the returnUserInput() as input
													// Note that the value name "input" in the main() and returnUserInput() are not the same
													// Test that change the name on either functions to see. 
	std::cout << input << " times 2 is " << 2 * input;
	return 0;
}

