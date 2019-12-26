#include <iostream>

int staticCastStatement() {                                                     // Use in Chapter 5.2: Arithmetic operators
    int x{ 7 };
    int y{ 4 };
	std::cout << "Static Cast Statment Function!" << '\n';

    std::cout << "int / int = " << x / y << "\n";
    std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
    std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
    std::cout << "double / double = " 
		<< static_cast<double>(x) / static_cast<double>(y) << "\n";

    return 0;
}

int remainderCondtion() {														// Use in Chapter 5.3: Modulus and Exponentiation
	std::cout << "Remainder Condtion Function!" << '\n';
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << "The remainder is: " << x % y << '\n';

	if ((x % y) == 0)
		std::cout << x << " is evenly divisible by " << y << '\n';
	else
		std::cout << x << " is not evenly divisible by " << y << '\n';

	return 0;
}

int incrementAndDecrement() {													// Use in Chapter 5.4: Increment/decrement operators, and side effects
	std::cout << "Increment and Decrement Function!" << '\n';
	int x{ 5 };
	int y{ 5 };
	std::cout << x << " " << y << '\n';
	std::cout << "We will do ++x and --y" << '\n';
	std::cout << ++x << " " << --y << '\n'; // prefix
	std::cout << x << " " << y << '\n';
	std::cout << "We will do x++ and y--" << '\n';
	std::cout << x++ << " " << y-- << '\n'; // postfix
	std::cout << x << " " << y << '\n';

	return 0;
}

int newConditionalStatement() {													// Use in Chapter 5.5: Comma and conditional operators
	std::cout << "?: Statement Function!" << '\n';
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	std::cout << '\n';

	int y{ 10 };
	if (x > y) {
		std::cout << "We used the if statement" << '\n';
	}
	else {
		std::cout << "We used the else statement" << '\n';
	}

	std::cout << (x > y) ? x:y << '\n';
	return 0;
}

int whyUsingNewConditionalStatement() {											// Use in Chapter 5.5: Comma and conditional operators
	bool inBigClassroom{ false };
	const int classSize{ inBigClassroom ? 30 : 20 };
	std::cout << "The class size is: " << classSize << '\n';
	return 0;
}

int sameVersionOfWhyUsingNewConditionalStatement(bool inBigClassroom) {			// Use in Chapter 5.5: Comma and conditional operators
	if (inBigClassroom)
		return 30;
	else
		return 20;
}

int main(){
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 5.1: Operator precedence and associativity
	std::cout << "Chapter 5.1" << '\n';
// Operators are like +,-,/, and *
// There are more type of operators and runs by a certain order like how 4 + 6 /2 = 4 + (6/2) = 7
// Take a look at the website as a table: https://www.learncpp.com/cpp-tutorial/operator-precedence-and-associativity/
// However, if we use () for any case, the stuff inside the () will always runs first
// Therefore, the mainpoint of this section is that use () often if you want a certain order to run for each operator

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 5.2: Arithmetic operators
	std::cout << "Chapter 5.2" << '\n';
// +x = x --> This is redundent that we don't use the Unary Plus sign
// -x = -x

// x + y = x plus y
// x - y = x minus y	--> Don't get confused with unary negative sign verse minus sign
// x * y = x times y
// x / y = x divide y
// x % y = x divide y remainder

// Take a look at the following lines
	std::cout << (7.0) / (4.0) << '\n';
	std::cout << (7) / (4.0) << '\n';
	std::cout << (7.0) / (4) << '\n';
	std::cout << (7) / (4) << '\n';
// You might see that every line expect line 28 shows a different result
// Be careful with float/double compare to integer
// If you want to prevent this issue, we use a statement called static_cast<datatype>
// Take a look the next function in line 3
    staticCastStatement();

// As you might know that, we can't divide something by 0. The complie will also crsh when you do it
    // However, there is a way to make it to infinity by looking at the previous chapter or ballDrop

// x = x + 4 can be written in x +=4
// They are the same meaning

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 5.3: Modulus and Exponentiation
	std::cout << "Chapter 5.3" << '\n';
// Let's take look more in depth of %
// This operator only works with integers, not double. 
// Take the following function in line 15
	remainderCondtion();
// Use can also input negative interger that will return a value perfectly fine

// For exponentiation functions, we don't use ^ (That stands for XOR which will be in Chapter 7)
// We use an actual function from a different package
#include <cmath>
// cmath is the one that will bring the package of the power function

	double power = std::pow(3.5, 4.2);
	std::cout << power << '\n';

// The reason why we can't use int or float is because rouding issue will occur
// There is more content with loops: https://www.learncpp.com/cpp-tutorial/5-3-modulus-and-exponentiation/
// But for now, we don't need to worried about it

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 5.4: Increment/decrement operators, and side effects
	std::cout << "Chapter 5.4" << '\n';
// If you look at the ballDrop Program, you might see this statement: ++x
// This means add a value and use that new define x
// ++x --> x = x + 1;
// However, there is more than this: take the look at the following function in line 35
	incrementAndDecrement();
// ++x does x = x + 1 first thent print out while x++ is print the x value first then do x = x + 1
// Same idea for the --y and y--

// In the following website, it will talk about side effect of increment and decrement
// https://www.learncpp.com/cpp-tutorial/increment-decrement-operators-and-side-effects/
// Just make sure that you don't get confused with the code with side effect of increment and decrement

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 5.5: Comma and conditional operators
	std::cout << "Chapter 5.5" << '\n';
// Comma only uses for loops (esp. for loops) these days, but there is more than that
// We will not go over it because most of them can be done without using comma: it will make you confused
// https://www.learncpp.com/cpp-tutorial/comma-and-conditional-operators/

// ?: is an operator of saying if and else statement for an Arithmetic operator
// Let's take an example for the following function in line 
	newConditionalStatement();
// It will only return the value of 0(false) or 1(true)
// Why would we used it? Here is an simple example why in line 67 and line 74
	whyUsingNewConditionalStatement();

	const int classSize{ sameVersionOfWhyUsingNewConditionalStatement(false) };
	std::cout << "The class size is: " << classSize << '\n';

// Both functions are the exact the same, it will reduce a lot of writing and lines
// Make sure use the right operator for each stituation

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 5.6: Relational operators and floating point comparisons
	std::cout << "Chapter 5.6" << '\n';













	return 0;
}
