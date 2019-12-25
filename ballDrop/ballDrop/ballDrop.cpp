#include "collectData.h"
#include "condition.h"
#include <iostream>

int main()
{
    double height = collectHeight();                               // Collect the Height of the building: Look at collectData.h                         
    double seconds = collectSeconds();                             // Collect the period of the ball drop: Look at collectData.h
    std::cout << "If the building's height is " << height          // Printing out the following results
        << "m, then the ball distance will be the following " 
        << seconds << " seconds." << '\n';
    
    condition(seconds, height);                                     // The actual math: Look at condition.h

 
}

