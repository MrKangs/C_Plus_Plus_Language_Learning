#ifndef CALCULATION_H									// Head guarder
#define CALCULATION_H
#include "constants.h"

double calculation(double x, double y) {				// x = seconds, y = height
	double distance = (G * (x * x) / 2);				// The distance formula calculation that far moved
	return (y - distance);								// Since we are solving for the distance between the ball and the ground, 
														// we subtract the height of the building
}

#endif 

