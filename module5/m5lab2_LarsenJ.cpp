// M5LAB2
// Larsen Justin
// 4/2/2025
//finish functions

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
double displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
    //cout << area;      
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
double getLength()
{
    double vLength;
    cout << "Enter the Length" << endl;
    cin >> vLength;

    return vLength;
}
double getWidth()
{
    double vWidth;
    cout << "Enter the Width" << endl;
    cin >> vWidth;

    return vWidth;
}
double getArea(double length, double width)
{
    double vArea;
    vArea = length * width;


    return vArea;
}
double displayData(double length, double width, double area)
{
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
    cout << "area: " << area << endl;
}