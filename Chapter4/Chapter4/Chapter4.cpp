#include <iostream>


void writeValue(int x) {																				//Use in Chapter 4.2: Void 
	std::cout << "The value of x is " << x << '\n';
}

int randomNumber1(void) {																				//Use in Chapter 4.2: Void
	int x;
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}

int randomNumber2() {																					//Use in Chapter 4.2: Void
	int x;
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;

}

void sizeofOperator() {																					//Use in Chapter 4.3: Object sizes and the sizeof operator
	std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
	std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
	std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n"; // C++11 only
	std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n"; // C++11 only
	std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
	std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
	std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
	std::cout << "long long:\t" << sizeof(long long) << " bytes\n"; // C++11 only
	std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
	std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
	std::cout << "long double:\t" << sizeof(long double) << " bytes\n";
}

int integerDivsion(int x,int y) {																		//Use in Chapter 4.4: Signed Integer
	int z = x / y;
	return z;
}

void unsignedShortInteger() {																			//Use in Chapter 4.5: Unsigned Integer and Avoid it
	unsigned short x = 65535; // largest 16-bit unsigned value possible
	std::cout << "x was: " << x << '\n';

	x = 65536; // 65536 is out of our range, so we get wrap-around
	std::cout << "x is now: " << x << '\n';

	x = 65537; // 65537 is out of our range, so we get wrap-around
	std::cout << "x is now: " << x << '\n';	

	std::cout << "Now when we do the opposite way of circluing around the following will be like this:" << '\n';

	unsigned int y = 0; // smallest 2-byte unsigned value possible
	std::cout << "y was: " << y << std::endl;

	y = -1; // -1 is out of our range, so we get wrap-around
	std::cout << "y is now: " << y << std::endl;

	y = -2; // -2 is out of our range, so we get wrap-around
	std::cout << "y is now: " << y << std::endl;

	std::cout << "At last, simple operators doesn't work as normal: take a look at the following: " << '\n';

	unsigned int a = 5;
	unsigned int b = 3;
	std::cout << "The difference of 5 and 3 should be 2 but we get " << a - b << '\n';
}

#include <cstdint>																						//Use in Chapter 4.6: Fixed-width integers and size_t

int fixedInt() {																						//Use in Chapter 4.6: Fixed-width integers and size_t
	std::int16_t i(5);
	std::cout << i << '\n';
	std::uint16_t j(65535);
	std::cout << j << '\n';
	return 0;
}

int fastandLeast() {																					//Use in Chapter 4.6: Fixed-width integers and size_t
	std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

	std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

	return 0;
}

int size_tis() { //?																					//Use in Chapter 4.6: Fixed-width integers and size_t
	std::cout << sizeof(int) <<'\n';
	return 0;
}

int floatingPointis() {																					//Use in Chapter 4.8: Floating point Numbers
	std::cout << 5.0 <<'\n';
	std::cout << 6.7 << '\n';
	std::cout << 6.9f << '\n';
	std::cout << 5.0f << '\n';
	std::cout << 987654321.123456789<<'\n';
	std::cout << 987654.3f << '\n';
	std::cout << 9876543.2f << '\n';
	return 0;
}

#include <iomanip>																						//Use in Chapter 4.8: Floating point Numbers floatvsdouble function

int floatVSDouble() {																					//Use in Chapter 4.8: Floating point Numbers
	std::cout << std::setprecision(16);					
	std::cout << 3.3333333333333333333333f << '\n';
	std::cout << 3.3333333333333333333333 << '\n';
	float f{ 123456789.0f };
	std::cout << std::setprecision(9);
	std::cout << f << '\n';
	return 0;
}

int roundingErrors() {																					//Use in Chapter 4.8: Floating point Numbers
	double d{0.1};
	std::cout << d << '\n';
	std::cout << std::setprecision(17);
	std::cout << d << '\n';

	std::cout << std::setprecision(17);
	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); 
	std::cout << d1 << std::endl;
	std::cout << d2 << std::endl;
	return 0;
}

int infinity() {																						//Use in Chapter 4.8: Floating point Numbers
	double zero(0.0);
	
	double positive(5.0 / zero);
	std::cout << positive << std::endl;

	double negative(-5.0 / zero);
	std::cout << negative << std::endl;

	double indeterminate(zero / zero);
	std::cout << indeterminate << std::endl;

	return 0;
}

int booleanInWords() {																					//Use in Chapter 4.9: Boolean Value
	std::cout << true << std::endl;
	std::cout << false << std::endl;

	std::cout << std::boolalpha;

	std::cout << true << std::endl;
	std::cout << false << std::endl;

	std::cout << std::noboolalpha;

	std::cout << true << std::endl;
	std::cout << false << std::endl;

	return 0;
}

int inputtingBoolean() {																				//Use in Chapter 4.9: Boolean Value
	bool b{};
	// std::cout << "Enter a boolean: "" << '\n'
	// The above statement will not work because boolean only takes integer not strings
	std::cout << "Enter an integer:" << '\n';
	std::cin >> b;
	std::cout << std::boolalpha;
	std::cout << "You Entered: " << b << '\n';
	return 0;
}

bool isEqual(int x, int y) {																			//Use in Chapter 4.9: Boolean Value
	return (x == y);
}

int collectIntData() {																					//Use in Chapter 4.9: Boolean Value &&
	std::cout << "Enter an Integer: ";																	// Chapter 4.10: Introduction to If Statements
	int x{};
	std::cin >> x;
	std::cout << '\n';
	return x;
}

int testingTwoInteger() {																				//Use in Chapter 4.9: Boolean Value
	int x = collectIntData();
	int y = collectIntData();

	std::cout << std::boolalpha;
	std::cout << x << " and " << y << " are equal?: ";
	std::cout << isEqual(x, y) << std::endl;
	return 0;
}

int ifElseIfElseStatement() {																			//Use in Chapter 4.9: Boolean Value
	int x = collectIntData();
	if (x > 0)
		std::cout << "The integer is positive" << std::endl;
	else if (x < 0)
		std::cout << "The integer is negative" << std::endl;
	else
		std::cout << "The integer is 0" << std::endl;
	return 0;
}

bool isEqualWithIfStatements(int x, int y) {															//Use in Chapter 4.10: Introduction to If Statements
	if (x == y) {
		return true;
	}
	else
		return false;
}

int testingTwoIntegerNew() {																			//Use in Chapter 4.10: Introduction to If Statements
	int x = collectIntData();
	int y = collectIntData();

	bool b = isEqualWithIfStatements(x, y);
	std::cout << std::boolalpha;
	if (b == 1 || b == true)
		std::cout << x << " and " << y << " are equal each other." << std::endl;
	else if (b == 0 || b == false)
		std::cout << x << " and " << y << " are not equal each other." << std::endl;
	else
		std::cout << "I don't know what happened, please try again." << std::endl;
	return 0;
}

int chars() {																							//Use in Chapter 4.11: Chars
	char c1{ 'a' };
	char c2{ 97 }; // This is the same as c1; therefore, don't use this method
	std::cout << c1 << " and " << c2 << " are the same" << '\n';
	std::cout << 'c' << '\n';
	return 0;
}

int charsToIntConvertion() {
	char c1{97};
	int x (c1);
	std::cout << x << '\n';
	std::cout << static_cast<int>(c1) << '\n';

	return 0;
}
int main()
{
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.1: Introduction to fundamental data types
// Data type:  is to tell the compiler how to interpret the contents of memory in some meaningful way, often called a ¡°type¡± for short. 
// Types of Data type:
	// float, double, long double are floating points that is a number that can contain fractions such as 3.141592(a.k.a pi).
	// bool is a Integral (boolean) that descrbies only in true or false.
	// char, wchar_t, char8_t, char16_t, char32_t are Integral (characters) that can contain a text such as "Yo".
	// short, int, long, and long long are Integral (Integer) that contains a ll positive, negative integers including 0 such as '65'
	// std::nullptr_t is a Null Pointer that is a null pointer sucn as nullptr (we will go over this concept later)
	// void is no type that returns void or n/a. 

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.2: Void
// Void is basically not returning values (similar, or maybe same, as java) Look at line 3
	writeValue(4);
// Now if we put a return value at the end of the function, then it will return as an error. 

//Looking at line 7 and 14 for randomNumber1 function and randomNumber2 function are the same. 
//By entering the word void in the parameter is the same meaning of empty parameter

	std::cout<< randomNumber1() << '\n';
	std::cout<< randomNumber2() << '\n';

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.3: Object sizes and the sizeof operator
// The following function tells you how many bytes can hold for each data type
	sizeofOperator(); //line 22
// In the function, you will see sizeof statement. That statement tells you what is the size of the varable is in bytes

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.4: Signed integers
// By default, integers are signed, which means the number¡¯s sign is preserved
// Therefore, a signed integer can hold both positive and negative numbers (and 0)
// For more informaiton, check this website: https://www.learncpp.com/cpp-tutorial/signed-integers/
// Let's take a look at the integerdivision function in line 37
	std::cout << integerDivsion(5, 4) << '\n';
// the result will be 1, but it is not 1 (it is 1.25)
// when you return a value of int, it will only print the integer value which in this case is 1
// if you want to print the "true" result, then we need to return the value in a different value

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.5: Unsigned integers and you should avoid them
// Compare to signed integer, where the integer can hold negative, positive, and 0, unsigned integer can only hold positive number
// Take a look at the chart from the website to know the range: https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/
// You will see that the range is double but only to one side; this can cause some issues
// Let's take a look at unsignedshortinteger function in line 42
	unsignedShortInteger();
// As you see the results of the following, it is stange since we are not used to those stituations
// We might use it for special program, but most of the integer, we use signed integer so don't confuse it

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.6: Fixed-width integers and size_t
// Previous chapter, int is always 2 byte size memory holder
// But fixed-width integers can change that to increase the integer range; it is stupid for now
// To use it, we need to use the header in line 70
// Let's take a look at the function fixedint() in line 72
	fixedInt();
// As you see, we could do unsigned integer or signed integer, but the range will change which number you do
// if we do int32_t, then that integer can hold a 32bit long integer  https://www.learncpp.com/cpp-tutorial/fixed-width-integers-and-size-t/ 

// The fast type (std::int_fast#_t) provides the fastest signed integer type 
// with a width of at least # bits (where # = 8, 16, 32, or 64). 
// For example, std::int_fast32_t will give you the fastest signed integer type that¡¯s at least 32 bits.

// The least type(std::int_least#_t) provides the smallest signed integer type 
// with a width of at least # bits(where #  = 8, 16, 32, or 64).
// For example, std::int_least32_t will give you the smallest signed integer type that¡¯s at least 32 bits.

// Take a look at the fastandleast() in line 80
	fastandLeast();
	size_tis();

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.7: Introduction to scientific notation 
// https://www.learncpp.com/cpp-tutorial/introduction-to-scientific-notation/
// Take a look at this website if you do not know what is scientific notation is
// Most students should I have learn from high school math or chemistry

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.8: Floating point numbers
// floaring point numbers are used to store numbers such as very long numbers or decimal numbers
// Take a look at floatingpointis() in line 97
	floatingPointis();
// In line 99 and line 100 shows that there is two way to write a floating number
// Adding the letter f (means floating) will make the number as floating
// While line 98, even though we wrtie as 5.0, it will return as a interger; even we wrtie f in the end
// Last, we see that long number will be written as a scientific notation
// The maximun number length is 6
// Take a look at this function in line 111
	floatVSDouble();
// If you see the output, you will know that the float output will not be 3.333333333333...
// The end digit numbers will not be 3's
// Also, even we set up the float number as 123456789.0, it returns as 1234567892 which it is a huge error
// Usually floats only holds 7 digit precision that can cause error
// If you are dealing with a huge digit number, then use double rather than float
// Let's see more example of float rounding errors: take a look the next function in line 121
	roundingErrors();
// The first two numbers show that setting a precision that float can't holds will make a difference
// The last two numbers show that the two numbers should be equal but they are not
// This will come into more depth in Chapter 5.6, but basic knowledge is that it transfer to float which creates a problem
// Let's look a concept: infinity in line 135
	infinity();
// The return value will be the following: inf, -inf, nan(inf)

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.9: Boolean values
// Initialzing a boolean will store the value as false, which it will be 0 not 1.
	bool b1{};
	std::cout << b1 << '\n';
// ! means not or opposite
// So if I do !true(1), it will be false(0), and !false(0) will be true(1)
// If you want to print the actual word, look at the following function in line 150
	booleanInWords();

// You can't initialze a boolean as an integer, but if we set as the boolean all integer rather than 0, it will change to true
// bool b2{4}; // Invalid Statement
	bool b2 = 4;
	std::cout << b2 << std::endl;
	bool b3 = -4;
	std::cout << b3 << std::endl;
	bool b4 = 0;
	std::cout << b4 << std::endl;

// The boolean return value will be 1,1,0

// Take a look at the following function in line 167
	inputtingBoolean();

// Then here is a program for comparing two integer that if they are the same or not in line 178, 182, and 190
	testingTwoInteger();

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.10: Introduction of ifstatements
// Let's take a simple if, else, and else if statement function in line 200
	ifElseIfElseStatement();

// Not only the if statements gives you the condition, it can also return a boolean value of true or false
// Let's rewrite the testingTwoInteger() by calling testingTwoIntegerNew() in line 182, 211, 219 by adding conditional (if statements)
	testingTwoIntegerNew();

// There will be more lessons about If statement in Chapter 5.2

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.11: Chars
// There are two ways to initialize char value: either with the actual result or the code of the value
// Take a look at this website to see the code table: https://www.learncpp.com/cpp-tutorial/chars/
// We don't recommend to use the code value because there is a simple way to do it
// Take a look at chars() in line 234
	chars();

// Take a look function in line 242
	charsToIntConvertion();
// Some version will return as the following
// static_cast<new_type>(expression)
// But in my case, it returns as a fine 97 which it is strange. 
// But the second statement, std::cout << static_cast<int>(c1) << '\n';, will return as 97 for any user.









	




































	return 0;
}
