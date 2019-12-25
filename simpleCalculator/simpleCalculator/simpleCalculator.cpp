#include <iostream>
#include "collectData.h"
#include "Condition.h"



int main()
{
    double x = collectNumber();                                                     // Collect first Number Input: Look at collectData.h
    double y = collectNumber();                                                     // Collect second Number Input: Look at collectData.h  
    char c = collectChar();                                                         // Collect character for what calcuation: Look at collectData.h
    double result = condition(c, x, y);                                             // Doing the Math: Look at Condition.h

    std::cout << x << " " << c << " " << y << " is " << result << '\n';             // Printing the result out
    std::cout << "If you get infinity, then you enter the wrong character";         // Let knowing the User that they put the wrong char
    return 0;
}
