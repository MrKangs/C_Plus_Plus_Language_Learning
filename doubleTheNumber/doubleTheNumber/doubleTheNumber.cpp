#include <iostream>

int main() {
	std::cout << "Enter an Integer:";							// Printing the question to the user
	int x{0};													// Set the user input value as x(currently as 0 for now)
	std::cin >> x;												// Collect the user input to the value x	
	std::cout << "Double that interger is:" << x * 2 << '\n';	// Print the result while calculating the answer as double with a new line
	std::cout << "Triple that interger is:" << x * 3;			// Print the result while calculating the answer as triple
	return 0;
}