// CSC 134
// M3T1 
// norrisa
// 2/17/2025
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;
    // Print the area
    cout << "The area of the first rectangle is: " << area1 <<  endl;
    cout << "The area of the second rectangle is: " << area2 << endl;

    //Which is larger
    if (area2 > area1)
    {
        cout << "The area of the second rectangle is larger." << endl;
    }
    else if (area1 > area2)
    {
        cout << "The area of the first rectangle is larger." << endl;
    }
    else 
    {
        cout << "The rectangles are the same size" << endl;
    }
    return 0;
}