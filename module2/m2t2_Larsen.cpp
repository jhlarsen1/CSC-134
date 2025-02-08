//CSC -134
//LarsenJ
//1/29/2025
//receipt calculator

#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() 
{
    // Define variables
    double mealPrice = 5.99;  
    double taxPercent = 8.0;  
    double taxAmount = (mealPrice * taxPercent) / 100;  // 
    double totalPrice = mealPrice + taxAmount;  // 

    // Print receipt
    cout << fixed << setprecision(2); 
    cout << "Receipt\n";
    cout << "---------------------\n";
    cout << "Price before tax: $" << mealPrice << endl;
    cout << "Tax (" << taxPercent << "%):      $" << taxAmount << endl;
    cout << "Total:            $" << totalPrice << endl;

    return 0;
}
