#include <iostream>

int main() {
	//------------------------------------------------------------------------------------------------------------------------------------------
	//chpater 1.2 comments
	std::cout << "Hello, world!\n";				// std:cout lives in the iostream library
	std::cout << "It is nice to meet you!\n";	// these comments make the code hard to read
	std::cout << "Yeah\n";						// especially when lines are different lengths
												// therefore, use tab button to make them in line
												/* or use these to comment a long paragraph
												*/
	//------------------------------------------------------------------------------------------------------------------------------------------
	//chapter 1.3 ~ 1.4 variable assignments and initialization

	int x;										// int x (same as java)
	int a, b;									// int a; and new line int b;
	double c; int d;							// double c; and new line int d;

	int values = 4;								// copy initialization of value 4 into variable values
	int yvalue(5);								// direct initialization of value 5 into variable yvalue
	int width{ 5 };								// brace (uniform) initialization of value 5 into variable width (can hold any type)
	int length{};								// zero initialization to value 0
	int ab, bb(5);								// ab is define as int and bb is define as int and value is 5
	int cb, db{ 5 };							// same idea from the preivous statement but just using brace
												/* We can use this for direct initialization, but can't use for copy initialization*/
	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.5 	
		
	
	
	
	
	
	
	
	
	return 0;									
												/* When an executable program finishes running, the program sends a value back to the operating 
												system in order to indicate whether it ran successfully or not. This particular return statement
												returns the value of 0 to the operating system, which means ¡°everything went okay!¡±. 
												This is the last statement in the program that executes. */
}

/* must have a main function no matter what in any C++ programs*/