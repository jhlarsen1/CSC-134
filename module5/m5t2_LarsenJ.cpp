/*
CSC 134
m5t2
LarsenJ
4/7/2025
*/
#include <iostream>
using namespace std;

int square(int x);
void printAnswerLine(int List, int SQUAREv);


int main()
{
    int List = 1,
        SQUAREv;
    while (List < 11)
    {
        //cout << List << endl;
        SQUAREv = square(List);
        printAnswerLine(List, SQUAREv);
        List++;
    }
    
    return 0;
}
int square(int x)
{

    return x * x;
}
void printAnswerLine(int List, int SQUAREv)
{

    cout << List << " squared is " << SQUAREv << endl;
}