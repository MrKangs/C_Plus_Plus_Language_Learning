// Chapter 2: Basics: Functions and Files

#include <iostream>
void doPrint() {
	std::cout << "In doPrint()\n";			// Chapter 2.1 Use. Printing how the main and other functions works in C++
}

void doB() {								// Chapter 2.1 Use. Mutiple layer of functions to execute
	std::cout << "In doB()\n";				// Note: Make sure you start with the smaller function, because the smaller one needs to be 
											// defined first than the bigger one. In this case: doB() < doA() < main()
											// Ignore the message above, go to chapter 2.7 to get information why
}

void doA() {								// Chapter 2.1 Use.
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


int division(int x, int y);					// Chapter 2.7 Use. Forward Declaration: this statement is called function prototype 

//int remander(int x, int y);				// Chapter 2.7 Use. Forward Declaration in different file of fuunction
											// Currently commented because of Chapter 2.11 & 2.12, remove the comment to work

using namespace std;						// Chapter 2.9 Use. Namespace for Std (Standard Library)

#define MY_NAME "Kenneth"					// Chapter 2.10 Use. This is directives with substitution

#define IFSTATEMENT							// Chapter 2.10 Use. This is directives without substitution

void foo();									// Chapter 2.10 Use. This is forward declaration

#include "remander.h"						// Chapter 2.11 & 2.12 Use. Adding the entire program file in the main function

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
		"world!" << '\n'; // prints "Hello world!", but don't do this! looks disgusting!

	// Make sure, when you write the code, make it easy to read, and basic stuff that should not be looked funky.
	// Look at this website for further explaination --> https://www.learncpp.com/cpp-tutorial/whitespace-and-basic-formatting/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.7: Forward declarations
	// For every previous chapters, we always defined the function before the main function. 
	// And look at my commit in the very top. It will tell you it won't work, but now it will
	// How? we use the tool of forward declaration.

	// Look below, we will define a new function after the main() called division function
	// now look at line 48, that is how to do forward declaration. just type the function statment before the main function
	
	std::cout << "division function results: " << division(6, 2) << '\n';				// Now it should work: it will give 3

	// Now we can write all the functions below the main function and do forward declaration before the main function. That is Nice!

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.8: Programs with multiple code files

// Look at this website how to add file in the same project: https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/
// Adding file references are easy compare to other programming languages. 
// It is the same as Forward declaration: just write the function name before the main function.

std::cout << "remander function/program results: " << remander(6, 4) << '\n';			// = 2

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.9: Naming conflicts and the std namespace

// If two identical identifiers are introduced into the same program in a way that the compiler or linker can¡¯t tell them apart, 
// the compiler or linker will produce an error. This error is generally referred to as a naming collision (or naming conflict).

// To make sure, please read over the code before you run it.

// You have noticed that we have been using std:: many many times. We can actually reduce it. 
// simpily write using namespace std; before the main function will do it. Look at line 53 and line 243


cout << "Hello World!" << '\n';				// It will run with no error

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.10: Introduction to the preprocessor --> Referenece: https://www.learncpp.com/cpp-tutorial/introduction-to-the-preprocessor/

// The preprocessor is best thought of as a separate program that manipulates the text in each code file.

// When the preprocessor runs, it scans through the code file(from top to bottom), looking for preprocessor directives.
// Preprocessor directives(often just called directives) are instructions that start with a # symboland end with a newline(NOT a semicolon).
// These directives tell the preprocessor to perform specific particular text manipulation tasks.
// Note that the preprocessor does not understand C++ syntax 
// instead, the directives have their own syntax(which in some cases resembles C++ syntax, and in other cases, not so much).
// The output of the preprocessor goes through several more translation phases, 
// and then is compiled.Note that the preprocessor does not modify the original code files in any way -- 
// rather, all text changes made by the preprocessor happen temporarily in - memory each time the code file is compiled.

// There are several directives types in C++ : include, object-like macros, function-like macros, and ifs. 

// Object-like macros has two types of directives: with subtitiles or without it
// #define MY_NAME "Kenneth" will be a with subsitution text
// #define MY_NAME will be a without subsitution text

// For the with subtitles it could be used like the following

	std::cout << MY_NAME;						// Look at line 54, the output will be Kenneth

// Then you might ask, why the heck we use this thing. Because it is one way to seperate code easily without using functions.

// What is an example for without subsitution text, well it used with the if directives.

#ifdef IFSTATEMENT								// if IFSTATEMENT is defined 
	std::cout << "If statements work" << '\n';	// it will print out this statement
#endif											// this will end the if statment (I hope there is a better writing if statement)

#ifdef MY_NAME
	std::cout << "My name is out:" << MY_NAME << '\n';
#endif

#ifdef ELSESTATEMENT											// There is no such ELSESTATEMENT defined, it will be ignored
	std : cout << "This is wrong, should not be printed";		// Therefore, this statement will not prinited
#endif

#ifndef IFSTATEMENT												// This an if not statment. 
	std::cout << "This is wrong, should not be printed";		// Since IFSTATEMENT exsits, it will not print the message
#endif // !IFSTATEMENT

#ifndef IFNOTSTATEMENT											// The opposite of the above statments
	std::cout << "If not statement is working" << '\n';
#endif // !ELSESTATEMENT

#if 0
	std::cout << "This will not be printed, so we can do anything from here even though it has error";
	Hey This is invalid text to do but we can do anything we want LOL.
		It is similar to a comment, but not useless for just commmet, for adding functions or debugging will be useful for this
#endif

		// Now look at the following example

#define Ken 9													// This tells that Ken is defined and the value is 9		

#ifdef Ken														// This directives only care whether Ken is defined or not
		std::cout << "Ken variable is " << Ken << '\n';			// This statement will now be replace as 9 as the Ken spot
#endif														

	foo();														// We run the program foo first, look at end of the main function 

#ifdef HELLO													// Since the function contains the #define HELLO it should pass
	std::cout << "HELLO";										// But it doesn't. Because directives runs first than the C++, and
#endif															// two of those functions are separate that reads differently


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.11: Header files: https://www.learncpp.com/cpp-tutorial/header-files/
// It is annoying when you need to call every function from every different file. 
// Therefore, we use a header to tell that we are using this entire program for this main function

// Look at line 60 to see how to declare the whole additional program (it will be combined with Chapter 2.12 Header Guard) 
// Use angled brackets to include header files that come with the compiler. Use double quotes to include any other header files.
// When you write a program, write the headers or #include in this order: your own user-defined headers first, 
// then 3rd party library headers, then standard library headers, with the headers in each section sorted alphabetically.

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 2.12: Header guard
// In any programming language, you can't have two same function name at all. Also you should not define the same function twice
// For example, I can't define foo() again since I already defined one. 
// Now let's look an example at sqaure.h and geometry.h and main function file

#include "square.h"
#include "geometry.h"

// If you run this with removing the comments above, you will get an error
// because you basically called getSquareSide function twice (since geometry.h is basically calling square.h function )

// As you see above, it is hard to tell whether you used the same function twice, therefore, we use a header guard to prevent this issue

// The format will be like this below

//#ifndef SOME_UNIQUE_NAME_HERE
//#define SOME_UNIQUE_NAME_HERE

// your declarations (and certain types of definitions) here

//#endif

// So go back to the example we had before with a new file called square.cpp

	std::cout << "a square has " << getSquareSides() << "sides\n";									// = 4
	std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';		// = 20
// As you see, there is no error when you include geometry.h and sqaure.h files
// header guard is only used in header files not in scoure files. Please take a look at sqaure.h to know the function of a header

// When you make a new header file, VS automatically write #pragma once which is also a header guard. 
// It works the same as the long header guard, but some programs doesn't support that feature. Therefore still use header guard

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// chapter 2.13: making the first program ever: https://www.learncpp.com/cpp-tutorial/how-to-design-your-first-programs/

	return 0;
}

int division(int x, int y) {				// Chapter 2.7 Use. divide two number and gives the results as an integer, no decimal or remander
	return x / y;
}

void foo() {
#define HELLO
}