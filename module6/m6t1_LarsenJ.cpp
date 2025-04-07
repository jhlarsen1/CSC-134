/*
CSC 134
m6t1 Basic Arrays
LarsenJ
4/7/2025
*/

#include <iostream>
using namespace std;

int main()
{
    const int DAYS = 5;
    int cars_today;
    int cars_total = 0;
    double cars_average;
    int cars[5];

    cout <<"Enter cars that passs for each day." << endl;
    for (int i=0; i < DAYS; i++)
    {
        cout << "Day " << i+1 << ": " ;
        cin >> cars_today;
        cars[i] = cars_today; //save todays value into array
        cars_total += cars_today;

    }

    cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
    cars_average = (double)cars_total / DAYS;
    cout << "for an average of " << cars_average << "each day." << endl;

    //now print the array
    for (int i = 0; i < DAYS; i++)
    {
        cout << "Day: " << i+1 << "Count: " << cars[i] << endl;
    }


    
}