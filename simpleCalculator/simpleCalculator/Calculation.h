#ifndef simpleCalculator_h                          //Header guarder
#define simpleCalculator_h

// The value must be return as double, therefore, all the function is all in double rather than int

double addition(double x, double y) {               // Addition 
    double result{ x + y };
    return result;
}

double subtraction(double x, double y) {            // Subtraction
    double result{ x - y };
    return result;
}

double multiplication(double x, double y) {         // Multiplication
    double result{ x * y };
    return result;
}
        
double division(double x, double y) {               // Division
    double result{ x / y };
    return result;
}

#endif
