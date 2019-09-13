// This program is used in chapter 2.12

#include "square.h"  // square.h is included once here
int getSquareSides()
{
	return 4;
}
int getSquarePerimeter(int sideLength)
{
	return sideLength * getSquareSides();
}