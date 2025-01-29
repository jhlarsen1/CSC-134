//CSC -134
//m2t1 the apple orchard part 2
//LarsenJ
//1/29/2025
//change to the original m1lab1 program
//adding input to the original program


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Apple Sales program
    //variables are like mailboxes
    string name = "Larsen";
    string user_name;
    int num_apples = 100;
    double cost_each = 0.25;
//greeting
    cout << "Hello whats your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << ;


//adding new variables
    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock" << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    double total_cost = num_apples * cost_each;
    cout << fixed << setprecision(2);
    cout << "The price for all the apples is: $" << total_cost <<endl;

    return 0;
}