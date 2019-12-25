#ifndef CONDITION_H																// Head guarder
#define CONDITION_H
#include "calculation.h"
#include <iostream>

int condition(double x, double y) {												// x = seconds, y = height, z = counter
	double z = 0.0;		
	while (z <= x) {															// Loop for seconds: We have not learn it yet
		if (calculation(z, y) > 0) {											// If the ball above the ground, give data
			std::cout << "The Ball at " << z << " second, it is located "		// Printing out where the ball is
				<< calculation(z, y) << "m above the ground." << '\n';
		}
		else {																	// If the calculation is negative, 
																				// we can say that it is on the ground
			std::cout << "The Ball is on the ground at "						// Printing it out that the ball is on the ground
				<< z << " seconds." << '\n';
		}
		z++;																	// Counter up: Loop material
	}

	return 0;
}

#endif 
