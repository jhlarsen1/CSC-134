//CSC -134
//m1lab1 the apple orchard
//LarsenJ
//1/27/2025
//were making the simplest program possible
//checkout machine

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Apple Sales program
    //variables are like mailboxes
    string name = "Larsen";
    int num_apples = 100;
    double cost_each = 0.25;

    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock" << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    double total_cost = num_apples * cost_each;
    cout << fixed << setprecision(2);
    cout << "The price for all the apples is: $" << total_cost <<endl;

    return 0;
}