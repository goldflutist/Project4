//
//  test.cpp
//  project4.cpp
//
//  Grace Xu, Noah Weingarden
//  xugrace, nwein
//
// Description::::::::

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"
#include "Color.h"
#include "Graphics.h"
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
    return 0;
}

void test_point() {
    cout << "point" << endl;
    Point pt1;
    Point pt2;
    Point pt3;
    Point pt4;
    Point pt5;
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

}

void test_triangle() {
    cout << "triangle" << endl;
    Triangle tri1;
    Triangle tri2;
    Triangle tri3(Point(5, 10), Point(20, 30), Point(50, 75), Color(5, 25, 55));
    Triangle tri4(Point(5, 10), Color(5, 0, 0), Point(5, 100), Color(255, 50, 100), Point(70, 25), Color(60, 29, 129));

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

}

void test_rectangle() {
    cout << "rectangle" << endl;
    Rectangle rec1;
    Rectangle rec2;
    Rectangle rec3(Point(20, 25), Point(50, 80), Color(90, 150, 175));
    Rectangle rec4(Point(50, 75), Point(-5, 45), Color(5, 120, 34), Color(75, 192, 52), Color(91, 77, 26), Color(80, 15, 275));

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
