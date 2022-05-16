#ifndef SQUARE
#define SQUARE

#include <iostream>
#include <string>

class Square {
    public:
        Square();
        Square(int length);

        virtual void SetLength(int length);

        int GetLength();

        virtual int GetArea();
        virtual int GetPerimeter();

    protected: 
        int length_;
};




#endif