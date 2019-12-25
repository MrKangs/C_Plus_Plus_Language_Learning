#ifndef Condition_h											//Header guarder
#define Condition_h
#include "Calculation.h"


double condition(char c, double x, double y) {								// Doing the condition for each input from the user
	if (c == '+') {
		return addition(x, y);
	}
	else if (c == '-') {
		return subtraction(x, y);
	}
	else if (c == '*') {
		return multiplication(x, y);
	}
	else if (c == '/') {
		return division(x, y);
	}
	else {
		double zero = 0.0;														// Letting the User that they put the wrong char input
		return (zero / zero);													// Like returning Infinity
	}
}

#endif
