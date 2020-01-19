#include "headers/libxyla/vector/size.h"
using namespace libxyla::vector;

Size::Size(double x, double y) {
    this->x = x;
    this->y = y;
}

Size::Size(int x, int y) {
    this->x = x;
    this->y = y;
}

double Size::getX() { return this->x; }
double Size::getY() { return this->y; }

int Size::getXCoord() { return (int)this->x; }
int Size::getYCoord() { return (int)this->y; }