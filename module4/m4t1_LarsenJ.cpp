/*
CSC 134
m4t1
LarsenJ
3/17/2025
2 simple codes hello x5 and numbers squared
*/

#include <iostream>
using namespace std;
  
int main()
{

    // Part 1, just say "hi" five times
    int count = 1;
    while (count <= 5) 
    {
        cout << "Hello number " << count << endl;
        count++;
    }

    

    //2nd part of the program
    cout << endl << endl << endl;
    int num =1;
    int squareNum = 10;
    cout << "Number\tNumber Squared" << endl;

    while (num <= squareNum)
    {
        
        cout << num << "\t" << num * num << endl;
        num++;
    }
    
    return 0; // done
}