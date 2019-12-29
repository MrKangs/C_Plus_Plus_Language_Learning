#ifndef CollectData_h														// Header guarder
#define CollectData_h
#include <iostream>															// Use for Printing and User Input

double collectNumber() {													// Collecting the Number Input from the User
    double x;													
    std::cout << "Enter an Double number: ";
    std::cin >> x;
    std::cout << '\n';
    return x;																// We want to maintain the data as double; therefore, the function is double
}

int collectChar() {															// Collection the Char Input from the User
	char c{};
	std::cout << "Only Enter the following: +, -, * , /" << '\n';			// Make sure you give the warning to the User to enter the right Char
	std::cout << "Enter what math you want?: ";
	std::cin >> c;
	std::cout << '\n';
	return c;																// Because Char is only one int (code), so it can be int
}

#endif 

