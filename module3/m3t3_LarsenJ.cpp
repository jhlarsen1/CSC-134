/*
CSC 134
m3t3
LarsenJ
2/17/2025
Start with dice rolls
what dice are you using today?
*/

#include <iostream>

//for random
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    const int SIDES = 12;
    int seed = time(0);
    //seed the random number generator
    srand(seed);
    //rand() is a large number , so we take the remainder which is %
    int roll;
    //roll a few times
    roll = ((rand() %SIDES)+ 1);
    cout << roll << endl;

    roll = ((rand() %SIDES)+ 1);
    cout << roll << endl;
    
    roll = ((rand() %SIDES)+ 1);
    cout << roll << endl;

}