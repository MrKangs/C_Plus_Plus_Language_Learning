// This Header is used in chapter 2.12

// We shouldn't be including function definitions in header files
// Besides, it doesn't work, it is only for forwarde declaration

#ifndef SQUARE_H
#define SQUARE_H
int getSquareSides();
int getSquarePerimeter(int sideLength); // forward declaration for getSquarePerimeter

#endif
