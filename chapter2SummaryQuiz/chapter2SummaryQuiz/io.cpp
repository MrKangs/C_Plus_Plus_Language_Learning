#include <iostream>
#include "io.h"

int readNumber() {														//this function takes the user input data and returns back to the main
	std::cout << "Enter an integer:";
	int x{ 0 };
	std::cin >> x;
	return x;
}

void writeAnswer(int sum) {												//this function takes the result and show it display
	std::cout << "The sum is " << sum;
}