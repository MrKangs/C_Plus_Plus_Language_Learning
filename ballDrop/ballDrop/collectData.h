#ifndef COLLECDATA_H																		// Head guarder
#define COLLECTDATA_H
#include <iostream>

double collectSeconds() {																	// Collect Data that how long the user want to see 
																							// the ball dropping form the building
	double x{};
	std::cout << "Enter the seconds that you want to see the ball dropping down: ";
	std::cin >> x;
	std::cout << '\n';
	return x;
}

double collectHeight() {																	// Collect Data that how tall the building is
	double x{};
	std::cout << "Enter the building height in meters: ";
	std::cin >> x;
	std::cout << '\n';
	return x;
}


#endif 

