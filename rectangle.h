#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>

#include "square.h"

class Rectangle : public Square {
    public: 
        Rectangle(int width, int length) : Square(length) {
            SetWidth(width);
        }

        void SetLength(int length) override { length_ = length; }
        void SetWidth(int width) { width_ = width; }

        int GetWidth() { return width_; }

        int GetArea() override { return length_ * width_; }
        int GetPerimeter() override { return (2 * length_) + ( 2 * width_); }


    private:
        int length_; 
        int width_;

};



#endif 