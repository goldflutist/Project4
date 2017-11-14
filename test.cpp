
//
//  test.cpp
//  project4.cpp
//
//  Grace Xu, Noah Weingarden
//  xugrace, nwein
//
// Test cases for the project 4

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"
#include "Color.h"
#include "Graphics.h"
#include "utility.h"
#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

void test_point();
void test_color();
void test_graphics();
void test_line();
void test_triangle();
void test_circle();
void test_rectangle();

int main() {
    test_point();
    test_color();
    test_graphics();
    test_line();
    test_triangle();
    test_circle();
    test_rectangle();
    
    cout << "hi";
    return 0;
    
}

void test_point() {
    cout << "point" << endl;
    Point pt1(101, -1);
    Point pt2(0, 99);
    Point pt3(-1, 100);
    Point pt4(99, 0);
    Point pt5(0, 0);
    Point pt6;
    Point pt7;
    Point pt8;
    
    pt1.setX(15);
    pt2.setX(-9);
    pt3.setX(0);
    pt4.setY(3);
    pt5.setY(0);
    pt6.setY(-323);
    pt7.setX(100);
    pt8.setY(100);
    
    
    cout << "pt1 is: " << pt1 << endl;
    cout << "pt2 is: " << pt2 << endl;
    cout << "pt3 is: " << pt3 << endl;
    cout << "pt4 is: " << pt4 << endl;
    cout << "pt5 is: " << pt5 << endl;
    cout << "pt6 is: " << pt6 << endl;
    cout << "pt7 is: " << pt7 << endl;
    cout << "pt8 is: " << pt8 << endl;
    
    
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    pt2.read(input_file);
    pt3.read(input_file);
    pt4.read(input_file);
    pt5.read(input_file);
    pt6.read(input_file);
    pt7.read(input_file);
    pt8.read(input_file);
    
    cout << "pt1 is: " << pt1 << endl;
    cout << "pt2 is: " << pt2 << endl;
    cout << "pt3 is: " << pt3 << endl;
    cout << "pt4 is: " << pt4 << endl;
    cout << "pt5 is: " << pt5 << endl;
    cout << "pt6 is: " << pt6 << endl;
    cout << "pt7 is: " << pt7 << endl;
    cout << "pt8 is: " << pt8 << endl;
    
    //testing member function of setX()
    pt1.setX(5);
    
    //testing member function of setY()
    pt1.setY(3);
    
    //testing member function of getX() and getY()
    cout << "( " << pt1.getX() << ", " << pt1.getY() << " ) " << endl;
    
    
    
    return;
}

void test_graphics() {
    
}

void test_color() {
    cout << "color" << endl;
    Color col1;
    Color col2;
    Color col3;
    Color col4(5, 25, 50);
    Color col5(-5, 150, 300);
    Color col6(50, -50, 150);
    Color col7(100, 75, 225);
    
    col1.setRed(50);
    col2.setGreen(15);
    col3.setBlue(-50);
    
    // test getRed, getGreen, getBlue
    cout << col1.getRed() << " " << col1.getGreen();
    cout << " " << col1.getBlue() << endl;
    
    ifstream ins;
    ins.open("data2.txt");
    ins >> col4;
    ins >> col5;
    
    cout << col4 << endl << col5 << endl;
    
    ofstream outs;
    outs.open("data2.txt");
    outs << col6 << endl << col7 << endl;
}

void test_line() {
    Line line1;
    Point pt1(101, -1);
    Point pt2(0, 99);
    Color col4(5, 25, 50);
    
    line1.setStart(pt2);
    line1.setEnd(pt1);
    line1.setColor(col4);
    
    cout << line1.getStart() << " " << line1.getEnd() << " ";
    cout << line1.getColor() << endl;
    
    Line line2(pt1, pt2, col4);
    
    cout << line2 << endl;
    
}

void test_triangle() {
    ifstream input_file;
    input_file.open("data1.txt");
    
    cout << "triangle" << endl;
    Triangle tri1;
    Triangle tri2;
    Triangle tri3(Point(5, 10), Point(20, 30), Point(50, 75), Color(5, 25, 55));
    Triangle tri4(Point(5, 10), Color(5, 0, 0), Point(5, 100), Color(255, 50, 100), Point(70, 25), Color(60, 29, 129));
    
    // test of default constructor
    Point pt1(101, -1);
    Point pt2(0, 99);
    Point p3;
    Point p4;
    Point p5;
    Color color2(-9, 270, 150);
    Color color3(0, 255, -1);
    Color color4(1, 254, 256);
    
    // test set triangle attributes
    tri3.setVertexOne(pt1); tri3.setVertexOneColor(color2);
    tri3.setVertexTwo(pt2); tri3.setVertexTwoColor(color3);
    tri3.setVertexThree(p3); tri3.setVertexThreeColor(color4);
    
    
    // test get trangle attributes
    cout << tri3.getVertexOne() << " " << tri3.getVertexOneColor() << " ";
    cout << tri3.getVertexTwo() << " " << tri3.getVertexTwoColor() << " ";
    cout << tri3.getVertexThree() << " " << tri3.getVertexThreeColor() << endl;
    
    tri1.read(input_file);
    cout << "tri1 is: " << tri1 << endl;
    tri2.read(input_file);
    cout << "tri2 is: " << tri2 << endl;
    tri3.read(input_file);
    cout << "tri3 is: " << tri3 << endl;
    tri4.read(input_file);
    cout << "tri4 is: " << tri4 << endl;
    
    Triangle tri5(p3, pt2, p4, color4);
    Triangle tri6(p5, color2, p3, color3, p4, color4);
    
    cout << tri2 << endl << tri3 << endl;
    
    ifstream ins;
    ins.open("data3.txt");
    ins >> tri1;
    ins >> tri2;
    
    cout << tri1 << endl;
    cout << tri2 << endl;
    
    ofstream outs;
    outs.open("data4.txt");
    outs << tri3 << endl;
    outs << tri4 << endl;
}

void test_circle() {
    Circle circ1;
    Circle circ2;
    int r = -2;
    
    Point pt1(101, -1);
    Point pt2(0, 99);
    Point p5(98, 1);
    Point p6(-1, 100);
    Point p7(99, 0);
    Point p8(1, 98);
    Color color2(-9, 270, 150);
    Color color3(0, 255, -1);
    
    // Set point and color
    circ1.setCenter(pt2);
    circ1.setRadius(-9);
    circ1.setColor(color3);
    
    circ2.setCenter(pt2);
    circ2.setRadius(r);
    circ2.setColor(color3);
    
    
    // Get point and color
    cout << circ1.getCenter() << " " << circ1.getRadius() << " ";
    cout << circ1.getColor() << endl;
    
    cout << circ2.getCenter() << " " << circ2.getRadius() << " ";
    cout << circ2.getColor() << endl;
    
    Circle circ3(p5, r, color2);
    
    cout << circ3 << endl;
    
    
}

void test_rectangle() {
    cout << "rectangle" << endl;
    Rectangle rec1;
    Rectangle rec2;
    Rectangle rec3(Point(20, 25), Point(50, 80), Color(90, 150, 175));
    Rectangle rec4(Point(50, 75), Point(-5, 45), Color(5, 120, 34), Color(75, 192, 52), Color(91, 77, 26), Color(80, 15, 275));
    
    Point p1;
    Point p4;
    Color color1(0, 0, 0);
    Color color2(-9, 270, 150);
    Color color3(0, 255, -1);
    Color color4(1, 254, 256);
    
    // test other constructor
    Point p2(100, -1);
    Point p3(0, 99);
    Point p5(98, 1);
    Point p6(-1, 100);
    Point p7(99, 0);
    Point p8(1, 98);
    
    // Setting points and color
    rec1.setStart(p2);
    rec1.setEnd(p3);
    rec1.setColor(color2);
    
    rec2.setStart(p4);
    rec2.setEnd(p5);
    rec2.setColorTopLeft(color2);
    rec2.setColorTopRight(color3);
    rec2.setColorBottomRight(color4);
    rec2.setColorBottomLeft(color3);
    
    // Getting points and color
    cout << rec2.getStart() << " ";
    cout << rec2.getEnd() << " ";
    cout << rec2.getColorTopLeft() << " " << rec2.getColorTopRight() << " ";
    cout << rec2.getColorBottomRight() << " " << rec2.getColorBottomLeft();
    cout << endl;
    
    cout << rec1.getStart() << " " << rec1.getEnd() << " ";
    cout << rec1.getColorBottomRight() << endl;
    
    Rectangle rec5(p4, p3, color2);
    Rectangle rec6(p5, p6, color1, color2, color3, color4);
    
    cout << rec3 << endl << rec4 << endl;
    
    ifstream ins;
    ins.open("data5.txt");
    ins >> rec1;
    ins >> rec2;
    
    cout << rec1 << endl;
    cout << rec2 << endl;
    
    ofstream outs;
    outs.open("data6.txt");
    outs << rec3 << endl;
    outs << rec4 << endl;
}

