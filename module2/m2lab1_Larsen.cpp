//CSC -134
//m2lab1
//LarsenJ
//2/9/2024
//calculate volume cost customer price and profit

#include <iostream>

using namespace std;

const double COST_PER_CUBIC_FOOT = 0.23;
const double CHARGE_PER_CUBIC_FOOT = 0.5;
double xLength;
double xWidth;
double xHeight;
double xVolume;
double xCost;
double xCharge;
double xProfit;


int main()
{

    cout << "Enter crate's length:  ";
    cin >> xLength;

    cout <<"Enter crate's width:  ";
    cin >> xWidth;

    cout << "Enter crate's Height:  ";
    cin >> xHeight;

    xVolume = xLength * xWidth * xHeight;
    xCost = xVolume * COST_PER_CUBIC_FOOT;
    xCharge = xVolume * CHARGE_PER_CUBIC_FOOT;
    xProfit = xCharge - xCost;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    
    cout << "Crate's Volume:  " << xVolume << endl;
    cout << "Crate's Cost:  " << xCost << endl;
    cout << "Customer's Charge:  " <<  xCharge << endl;
    cout << "Profit:  " << xProfit << endl;



}

