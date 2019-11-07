#include <iostream>

void writeValue(int x) {										//Use in Chapter 4.2: Void 
	std::cout << "The value of x is " << x << '\n';
}

int randomNumber1(void) {										//Use in Chapter 4.2: Void
	int x;
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}

int randomNumber2() {											//Use in Chapter 4.2: Void
	int x;
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;

}

void sizeofOperator() {											//Use in Chapter 4.3: Object sizes and the sizeof operator
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

int integerdivsion(int x,int y) {								//Use in Chapter 4.4: Signed Integer
	int z = x / y;
	return z;
}

void unsignedshortinteger() {											//Use in Chapter 4.5: Unsigned Integer and Avoid it
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
	std::cout << "The difference of 5 and 3 should be 2 but we get " << a - b;
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
	std::cout << integerdivsion(5, 4) << '\n';
// the result will be 1, but it is not 1 (it is 1.25)
// when you return a value of int, it will only print the integer value which in this case is 1
// if you want to print the "true" result, then we need to return the value in a different value

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.5: Unsigned integers and you should avoid them
// Compare to signed integer, where the integer can hold negative, positive, and 0, unsigned integer can only hold positive number
// Take a look at the chart from the website to know the range: https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/
// You will see that the range is double but only to one side; this can cause some issues
// Let's take a look at unsignedshortinteger function in line 42
	unsignedshortinteger();
// As you see the results of the following, it is stange since we are not used to those stituations
// We might use it for special program, but most of the integer, we use signed integer so don't confuse it

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Chapter 4.6: 












	




































	return 0;
}
