// Write a program (named chapter2SummaryQuiz.cpp) 
// that reads two separate integers from the user, adds them together, and then outputs the answer. 
// The program should use three functions:
// A function named ¡°readNumber¡± should be used to get(and return) a single integer from the user.
// A function named ¡°writeAnswer¡± should be used to output the answer.This function should take a single parameterand have no return value.
// A main() function should be used to glue the above functions together.
// Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called ¡°io.cpp¡±.
// Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions with header guards

#include "io.h"

int main()
{
	int input1{ readNumber() };					//take the first input from readNumber() in io.cpp and save it as input1
	int input2{ readNumber() };					//take the second input from readNumber() in io.cpp and save it as input2
	writeAnswer(input1 + input2);				//send the sum of those data to the writeAnswer() in io.cpp and print it out
	return 0;
}
