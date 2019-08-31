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
// Chapter 2.2: 






	
	return 0;
}

