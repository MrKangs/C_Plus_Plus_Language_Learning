// Chapter 2: Basics: Functions and Files

#include <iostream>
void doPrint() {
	std::cout << "In doPrint()\n";			// Chapter 2.1 use. Printing how the main and other functions works in C++
}

void doB() {								// Chapter 2.1 Use. Mutiple layer of functions to execute
	std::cout << "In doB()\n";				// Note: Make sure you start with the smaller function, because the smaller one needs to be 
											// defined first than the bigger one. In this case: doB() < doA() < main()
}

void doA() {
	std::cout << "Starting doA()\n";
	doB();
	std::cout << "Ending doA()\n";
}

int return5() {								// Chapter 2.2 Use. A small function that returns a value 5 as an integer
	return 5;
}

int returnUserInputInteger() {				// Chapter 2.2 Use. Function that ask the user input in integer and return that value in the main()
	std::cout << "Enter an Integer:";
	int x{ 0 };
	std::cin >> x;
	return x;
}

int add(int x, int y) {						// Chapter 2.3 Use. Adding two numbers
	return x + y;
}

int mutiply(int x, int y) {					// Chapter 2.3 Use. Mutiplying two numbers
	return x * y;
}

int subtraction(int x, int y) {				// Chapter 2.3 Use. Subtracting two numbers (x - y)
	return x - y;
}

int addThree(int x, int y, int z) {			// Chapter 2.3 Use. Adding three numbers
	return x + y + z;
}






int main()
{
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.1: Introduction of Functions
											// A function is a reusable sequence of statements designed to do a particular job
											// User-defined function is small chucks of functions to make the program easy to manage
											// All format of the function will be like this (expect the main function)
// void identifier(){						// identifier() can be replace as any name such as Kangs()
//  //the code of the function
// }

	std::cout << "Starting main()\n";		// It will start this statement by printing Starting main()
	doPrint();								// Then the program will go to doPrint() function and run it
	std::cout << "Ending main()\n";			// Once the doPrint() function is over, 
											// it will go back to the main function to print the Ending main()

	doPrint();								// You can call the same function many times in the main function


	std::cout << "Starting main()\n";		// Not only you can call one function, you can call functions that are in layers
	doA();
	std::cout << "Ending main()\n";

	/*										// Sadly, compare to other functions, C++ doesn't support nested functions
											// Nested functions are defining a function in a function
											// For example, the following is illegal to do in C++
		int main(){
			int foo() 
				{
					std::cout << "foo!";
					return 0;
				}
 
			foo(); // function call to foo()
			return 0;
		}	
	*/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.2: Function return Value
											// Compare to the last chapter, this chapter will use a different type of function
											// What if a function needs to send a data to the main function?
											// then we use the return function.
											// The format of the function will be like this
/*	
type return(){								// type can be any type such as string, int, char, etc.
	//My code								// the function name is also can be anything as the previous example 
	return type								// But recommended as returnSomthing() as the function name to read easily
}
*/
	std::cout << return5() << '\n';					// will return as 5
	std::cout << return5() + 2 << '\n';				// will return as 7

											// Now look at doubleTheNumberRenewVersion.cpp 
											// It is the same program as doubleTheNumber.cpp, but it will now contains the concept of functions
							
											// You already see that void functions doesn't return a value. That is the difference

											// You now have the conceptual tools to understand how the main function actually works. 
											// When the program is executed, the operating system makes a function call to main. 
											// Execution then jumps to the top of main. The statements in main are executed sequentially. 
											// Finally, main returns an integer value (usually 0) back to the operating system. 
											// This is why main is defined as int main().
											// As I mentioned before, return 0 in the main function will tell use whether the function 
											// is good or not.

	//int x{};
	//std::cout << "Enter an integer: ";
	//std::cin >> x;

	//int y{};
	//std::cout << "Enter an integer: ";
	//std::cin >> y;

	//std::cout << x << " + " << y << " = " << x + y << '\n';

											// As you might see above, it is redundent of using the statement for a different value.
											// The beauty of functions comes in here. we can write this program better! Look below

	int x{ returnUserInputInteger() };
	int y{ returnUserInputInteger() };

	std::cout << x << " + " << y << " = " << x + y << '\n';
											// Way much better than previous one. If we want to fix some problems,
											// we can fix it in returnUserInputIngeter()

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.3: Arguments and Parameters in Functions

	// A function parameter is a variable used in a function. Function parameters work almost identically to variables defined inside 
	// the function, but with one difference: they are always initialized with a value provided by the caller of the function.
	
	/*
	// This function takes no parameters
	// It does not rely on the caller for anything
	void doPrint(){
		std::cout << "In doPrint()" << '\n';
	}
 
	// This function takes one integer parameter named x
	// The caller will supply the value of x
	void printValue(int x){
		std::cout << x  << '\n';
	}
 
	// This function has two integer parameters, one named x, and one named y
	// The caller will supply the value of both x and y
	int add(int x, int y){
		return x + y;
	}

	// And when you want them to use in the main function, you need to enter like this below
	// doPrint(); --> In doPrint() will print out
	// printValue(4); --> 4 will print out
	// add(5,6); --> it will return a value of 11, but not be printed

	// parameters are the function type input, and arguments are the actual data input
	// for example in printValue(int x), int x part will be parameter while in printValue(4), the 4 will be the argument
	*/

	// Go look at doubleTheNumberReRenewVersion.cpp as an example

	std::cout << add(3, 5) << '\n';													// = 8
	std::cout << addThree(1 + 2, 5 * 4, 5 - 9) << '\n';								// = 19

	int a{ 5 };
	std::cout << add(a, a) << '\n';													// = 10
	std::cout << addThree(add(a, 2), mutiply(4, 2), subtraction(6, 9)) << '\n';		// = 12 

	// All of these statments are okay to use

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.4: Introduction to local scope
	// local scope is the same concept of local variable: it doesn't change the global variable.
	// We already explain this concept in doubleTheNumberRenewVersion.cpp
	// The main key is that don't get confused with the same name variable in different functions: make all the variable name different!

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.5: Why the heck we need to use functions?

	/* We might say that we can just write the whole thing in one big program called the main().
	   But, actually writing them in small functions are easy to fix, modify, and lighter to use than that.
	   Also, the program will run faster than having a huge long program(not sure in C++ but in other language yse it is)
	   So, we need to use them. They are nice, neat, and easy to do.*/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.6: WhiteSpace in writing code.

	//std::cout << "Hello
		//world!"; // Not allowed!

	std::cout << "Hello "
		"world!"; // prints "Hello world!", but don't do this! looks disgusting!

	// Make sure, when you write the code, make it easy to read, and basic stuff that should not be looked funky.
	// Look at this website for further explaination --> https://www.learncpp.com/cpp-tutorial/whitespace-and-basic-formatting/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.7

















	
	return 0;
}

