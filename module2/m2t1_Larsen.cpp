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
    int num_apples = 100;
    double cost_each = 0.25;
//adding new variables
    string user_name;
    int apples_to_buy;
    

//greeting
    cout << "Hello whats your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;



    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock" << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    double total_cost = num_apples * cost_each;
    cout << fixed << setprecision(2);
    cout << "The price for all the apples is: $" << total_cost <<endl;
    
    cout << "How many apples would you like to buy? "; //changes for m2t1
    cin >> apples_to_buy;

    //logic for new math
    double new_total_cost = apples_to_buy * cost_each; //chamges for m2t1
    
    cout << "The price for the apples you would like to buy is $" << new_total_cost <<endl; //changes for m2t1

    return 0;
}