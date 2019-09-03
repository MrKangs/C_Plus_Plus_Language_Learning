// This program is also the same function as doubleTheNumber. 
// However, in this program, it uses the concept of Arguments and Parameters


#include <iostream>

int returnUserInput() {								// Same function in previous example(in Chapter 2.2)
	std::cout << "Enter the Integer:";
	int input{ 0 };
	std::cin >> input;
	return input;
}

int calculation(int x) {							// the input from the user will be the argument in this function
	int y = 2 * x;									// In this case, input in retrunUserInput() will be int x
	return y;
}

void results(int x, int y) {						// same as calculation function, but has 2 arguments
	std::cout << "2 * " << x << " = " << y;			// the first argument will be input in returnUserInput
}													// while secodn argument will be y in calculation function

int main()
{
	int input{ returnUserInput() };					// save the value as input from the returnUserInput()
	int result{ calculation(input) };				// save the valye as result from the calculation(input) function
	results(input, result);

	// We could write it above, but we can reduce it better. Look at the below statment
	//results(returnUserInput(), calculation(returnUserInput()));	// this will do the same as the above statments, but not correclty
	// Need to work on this later
	return 0;
}

