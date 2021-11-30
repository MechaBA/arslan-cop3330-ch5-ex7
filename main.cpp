/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Berkay Arslan
 */

#include <iostream>
#include <math.h>
using namespace std;

void roots(int a, int b, int c) //Variables (numbers inside of quadratic equation)
{
    float r1, r2, x, y;
    int disc = (b*b) - (4*a*c); //Formula
    if(disc == 0)
    {
        r1 =(float)(-b + sqrt(disc)) / (2*a);
        cout << "\nRoots: \nRoot 1 = \nRoot 2 = "<<r1<< endl; //Result x
    }
    else if(disc>0)
    {
        r1 = (float)(-b+sqrt(disc)) / (2*a); //First root as instructed in exercise
        r2 = (float)(-b-sqrt(disc)) / (2*a); //Second root as instructed in exercise
        cout << "\nRoots: \nRoot 1 = "<<r1<<" \nRoot 2 = "<<r2<< endl; //Result x
    }
    else
    {
        x = (float)(-b/(2*a));
        y = (float)(sqrt(-disc) / (2*a));
        cout << "\nRoots: Root 1 = "<<x<<"+"<<y<<"i"<< endl; //Result y
        cout << "r2 = " << x << "-" << y << "i" << endl;
    }
}

int main()
{
    cout<<"Quadratic equation: ax^2 + bx + c\n"; //Show equation
    int a, b, c; //Variables (numbers inside quadratic equation)
    cout<<"Enter a, b, and c for the quadratic equation: \n"; //Enter numbers one by one
    cin>>a>>b>>c;
    roots(a, b, c);
    return 0;
}