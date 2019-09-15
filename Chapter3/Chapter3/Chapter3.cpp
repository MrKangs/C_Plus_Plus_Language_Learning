#include <iostream>
int getValue() {											// Chapter 3.4 Use. Basic return function  
	std::cerr << "In getValue()\n";
	return 4;
}

int userInput() {											// Chapter 3.4 Use. User Integer Input
	std::cout << "Enter a number:";
	int x{ 0 };
	std::cin >> x;
	return x;
}

#define DEBUG_MODE											// Chapter 3.5 Use. If you want to disable debug mod, comment it out

int main()
{
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.1: Syntax and Semantic error
// Syntax error will be something like this below
	/*
	std::cout < "Hi there"; << x; // invalid operator (<), extraneous semicolon, undeclared variable (x)
	return 0 // missing semicolon at end of statement
	*/
// These error will be found when you complie the program, but Semantic error is a different case.
// It will run but it is not the programmar wanted, Look below of those examples
	/*	*({} is the main function code)
	{int a = 10;
    int b = 0;
    std::cout << a << " / " << b << " = " << a / b; // division by 0 is undefined
    return 0;},
	{int x;
    std::cout << x; // Use of uninitialized variable leads to undefined result
    return 0;},
	{return 0; // function returns here
     std::cout << "Hello, world!"; // so this never executes}
	*/
// Make sure you don't do somthing that is not logical

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.2: The debugging process
// The following is the 5 step of debugging the issue when the error is a semantic error
// 1.Find the root cause of the problem (usually the line of code that¡¯s not working)
// 2.Ensure you understand why the issue is occurring
// 3.Determine how you¡¯ll fix the issue
// 4.Repair the issue causing the problem
// 5.Retest to ensure the problem has been fixedand no new problems have emerged
// It is always good to comment what this function do or so.

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.3:Strategy for Debugging --> https://www.learncpp.com/cpp-tutorial/a-strategy-for-debugging/
// Please take a look of doing a great debugging method when you program

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.4: Basic debugging tactics
// There are 3 ways to use some basic debugging part
// First tactic is commenting out a single function or statement: 
		// If the program is not behaving incorrectly, it will be at least one of the statement.
		// comment one function or statement out and run the program again.
		// If the problem still exsists, then remove the previous comment, and try another one.
		// If it works fine, then look at that function or statement to fix it

// Second tactic is validating the code flow
		// there is one statement called std::cerr << "something\n"; statement 
		// compare to std::cout << "something\n";, the cerr statement is an unbuffer which sends the results immediatly while cout doesn't
		// let's look an example below
	std::cout << getValue<<'\n';
		// if you run it you will get 0039123A rather than 4
		// now when we add the code of std::cerr statement, it will return like this 
	std::cerr << "In main()\n";
	std::cout << getValue << '\n';
		// You will get In main(), 0039123A, not In getValue(), which means that the getValue() has nevr run.
		// You might noticed that we forgot the () in getValue() in the main function
	std::cout << getValue() << '\n';
		// now we get the result of 4

// The last tactic is similar to the previous example
		// it used the same statement, std::cerr:: "something\n";, but not just prining something, we can print values also
		// like something below
	int x{ userInput() };
	std::cerr << "x = " << x << '\n';
		// As you see, we can also use for values. 

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.5: More debugging tactics
// As we code, we might get annoyed that everytime when you run, you will see the std::cerr statement unless you deleted it
// Well, we can do a debug mode by using directives, look at line 14 and below
#ifdef DEBUG_MODE
	std::cerr << "In main()\n";
#endif 
	std::cout << "My name is Kenneth\n";
// If you see, when we comment it out, then std::cerr statement will not be printed out

// There is another way of doing coditional debug mod, using a logger
// Unfortunalty, VS Code doesn't have it setup as default, you need to check this website to make it
// https://www.learncpp.com/cpp-tutorial/more-debugging-tactics/

// If you are too lazy to make one like me, then just use the directives which seems better to me

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.6: Using an integrated debugger: Stepping
// Rather than entering code in the program, we can use the debug mode in the IDE. 
// There are few keys to know: F11, F10, F11 + Alt (Only for VS Code)
// step into command executes the next statement in the normal execution path of the program, 
// and then pauses execution of the program so we can examine the program¡¯s state using the debugger. --> F11

// The step over command executes the next statement in the normal execution path of the program. --> F10

// Step out does not just execute the next line of code. 
// Instead, it executes all remaining code in the function currently being executed, 
// and then returns control to you when the function has returned. --> F11 + Alt

// Try those shortkeys to test the code above
// Detailed explaination in this site --> https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-stepping/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 3.6: Using an integrated debugger: Stepping

	return 0;
}

