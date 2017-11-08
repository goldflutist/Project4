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

void test_point();
void test_color();

int main() {
    test_point();
    test_color();
    return 0;
}

void test_point() {
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

void test_color(){
    Color col1;
    Color col2;
    Color col3;
    Color col4(5, 25, 50);
    Color col5(-5, 150, 300);
    
    col1.setRed(50);
    col2.setGreen(15);
    col3.setBlue(-50);
    
    ifstream input_file;
    input_file.open("data2.txt");
    col4.read(input_file);
    col5.read(input_file);
    
    ofstream file;
    file.open("data2.txt");
    col4.write(file);
    col5.write(file);
}


