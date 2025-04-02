/*
m4hw1
Larsen Justin
4/2/2025
times tables
*/

#include <iostream>
using namespace std;
double multiply();
int main()
{
    multiply();

    return 0;
}
double multiply()
{
    int vNumber,
        vAnswer,
        i = 1;
    cout << "Enter requested multiplication table: ";
    cin >> vNumber;

    while (i < 13)
    {
        vAnswer = vNumber * i;
        cout << vNumber << " x " << i << " is " << vAnswer << endl;
        i++;

    }
}