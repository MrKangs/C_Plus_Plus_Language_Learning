//Chapter 1: C++ Basics
#include <iostream>

void doNothing(const int& x) 
//Some random function that we will looked at this later chapter 
/*	This function does basically nothing. Look at chapter 1.6 to know what we have this random function in this program.*/

{
}
int main() {
	//------------------------------------------------------------------------------------------------------------------------------------------
	//chpater 1.2: comments
	std::cout << "Hello, world!\n";				// std:cout lives in the iostream library
	std::cout << "It is nice to meet you!\n";	// these comments make the code hard to read
	std::cout << "Yeah\n";						// especially when lines are different lengths
												// therefore, use tab button to make them in line
												/* or use these to comment a long paragraph
												*/
	//------------------------------------------------------------------------------------------------------------------------------------------
	//chapter 1.3 ~ 1.4: variable assignments and initialization

	//int x;										// int x (same as java)
	//int a, b;									// int a; and new line int b;
	//double c; int d;							// double c; and new line int d;

	//int values = 4;								// copy initialization of value 4 into variable values
	//int yvalue(5);								// direct initialization of value 5 into variable yvalue
	//int width{ 5 };								// brace (uniform) initialization of value 5 into variable width (can hold any type)
	//int length{};								// zero initialization to value 0
	//int ab, bb(5);								// ab is define as int and bb is define as int and value is 5
	//int cb, db{ 5 };							// same idea from the preivous statement but just using brace
												/* We can use this for direct initialization, but can't use for copy initialization
												   Interestingly, compare to other languages, the program will return as an error if we never
												   use the variable in C++. You must need to use it (not just only defining it.)*/
	
	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.5: 	User input and output for iostream package

	// #include <iostream>--> iostream is a package for user input and output (io stands for input/output)

	std::cout << "Hello World!\n";		// std::cout is a print statment on the console. 
										// << is insertion operator which to send the text to the console(it works for any type)
	std::cout << 5;						// like this

	int kenneth (35); 					// this is another way
	std::cout << kenneth;

	std::cout << "Hello" << "World!";	// this statment is same as std::cout << "Hello World!"; 
										// Can be use for user input in one line seperation like in the below example

	int a(33);
	std::cout << "Your X value is " << a;

										/* in the previous print statments, we all see them connected all of them in one piece.
										   how to seperate them?*/

	std::cout << "Hello" << std::endl;	/* this std:endl means this line is done, so print the next following in the next line*/
	std::cout << "World!" << std::endl;

	std::cout << "Hello" << std::endl << "Kenneth" << std::endl; // you can combine them in one statment rather than two


										// However, \n statement is same as std::endl; but \n is better than std::endl since \n is faster
										// Also we already used it in previous examples statements

	std::cout << "Hello" << '\n' << "Kenneth" << '\n';
	

	std::cout << "Enter a number: ";
	int y{};
	std::cin >> y;						// std:cin is the user input statment. 
										// >> is an extraction operator which ask user to enter data in the following varialbe
	std::cout << "You entered the number: " << y << '\n';
	
	/*	If we enter a letter, it will give 0.
		If we enter a fraction number, the decimal place will remove and print the int part : input: 3.5, output: 3
		If we enter a negative number, it will give a negative number
		If we enter a word, it will give 0
		If we enter a huge number as 3 billion, we will get a random number
	*/

	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.6: Avoid uninitialized variable in programming 
	int x;
	
	doNothing(x);				// You will get an error that a is not uninitialized: it never got any data. Now add line 84
								// it will work. (with an error, but it works) but it should not have work!!!!!!

	std::cout << x; 

	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.7: variable naming 
	/*

	int value; // correct
	int Value; // incorrect (should start with lower case letter)
	int VALUE; // incorrect (should start with lower case letter)

	int my_variable_name; // correct (separated by underscores)
	int my_function_name(); // correct (separated by underscores)

	int myVariableName; // correct (intercapped/CamelCase)
	int myFunctionName(); // correct (intercapped/CamelCase)

	int my variable name; // invalid (whitespace not allowed)
	int my function name(); // invalid (whitespace not allowed)

	int MyVariableName; // valid but incorrect (should start with lower case letter)
	int MyFunctionName(); // valid but incorrect (should start with lower case letter)

	Make sure the name of the variable are not wired or lack of explaination! 
	However, if it too long to explain what that means, then just use fricking comments
	*/

	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.8: literals and operators 
	// int g = 5; Explaination: g is an constant while 5 is a literal 
	// 2 + 6 = 8; Explaination: 2 and 6 are literals while + and = are operators.
	// = are not the same as ==: = means is (or assigned as) while == means equal for comparison
	// (<<) means insection, (>>) means extraction
	// Go to this website for types of operators: https://www.learncpp.com/cpp-tutorial/introduction-to-literals-and-operators/

	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.9: Statment Vs. Expression
										// Statements are used when we want the program to perform an action. 
										// Expressions are used when we want the program to calculate a value.
	int g;								// this is an statement
	g = 5;								// this is an expression
	std::cout << g;						// this is an expression statement: The entire line is an statement,but there is operators 
										// that makes the line also an expression

	int s{ 2 + 3 };						// this is an statemetn with an expression: type identifier { expression };
										// Statements are used when we want the program to perform an action. 
										// Expressions are used when we want the program to calculate a value.

	//------------------------------------------------------------------------------------------------------------------------------------------
	// chapter 1.10: Making the first program in C++
	// Please look at the file called doubleTheNumber.cpp
	// Also look at the file called addAndSubtractTwoInteger.cpp

	return 0;									
												/* When an executable program finishes running, the program sends a value back to the operating 
												system in order to indicate whether it ran successfully or not. This particular return statement
												returns the value of 0 to the operating system, which means ¡°everything went okay!¡±. 
												This is the last statement in the program that executes. */
}

/* must have a main function no matter what in any C++ programs*/