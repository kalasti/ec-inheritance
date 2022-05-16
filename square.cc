#include "square.h"

Square::Square() {
    SetLength(1);
}

Square::Square(int length) {
    SetLength(length);
}

void Square::SetLength(int length) { length_ = length; }

int Square::GetLength() { return length_; }


int Square::GetArea() { return length_ * length_; }
int Square::GetPerimeter() { return (4 * length_) ; }