/**
 * Point.cpp
 *
 * EECS 183, Fall 2017
 * Project 4: CoolPics
 *
 * <Noah Weingarden, Grace Xu>
 * <nwein, xugrace>
 *
 * <Class file for points>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.

Point::Point() {
    x = 0;
    y = 0;
    
    return;
    
}

Point::Point(int xVal, int yVal) {
    
    x = checkRange(xVal);
    y = checkRange(yVal);
    
    return;
}

void Point::setX(int xVal) {
    x = checkRange(xVal);
    
    return;
}

int Point::getX() {
    
    return x;
}

void Point::setY(int yVal) {

    y = checkRange(yVal);
    
    return;
}

int Point::getY() {
    
    return y;
}

void Point::read(istream& ins) {
    
    char trash;
    
    ins >> trash >> x >> trash >> y >> trash;
    
    setX(x);
    setY(y);
    
    
    return;
}

void Point::write(ostream& outs) {
    
    outs << "(" << x << "," << y << ")";
    return;
}

int Point::checkRange(int val) {
    if (val >= 0 && val < DIMENSION){
        return val;
    }
    else if (val < 0){
        return 0;
    }
    else {
        return DIMENSION - 1;
    }
}




// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
