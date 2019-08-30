#include <iostream>

int main()
{
	int x{0}, y{0};														// Setting two values for user input
	std::cout << "Enter your first Integer:";							// Ask the first request to the user
	std::cin >> x;														// Save the first user input as x 
	std::cout << "Enter your second Integer:";							// Ask the second request to the user
	std::cin >> y;														// Save the second user input as y
	std::cout << x << " + " << y << " is equal to " << x + y << '\n';	// Do the calculation while printing the results for addition
	std::cout << x << " - " << y << " is equal to " << x - y ;			// Do the calculation while printing the results for subtraction
	return 0;
}

