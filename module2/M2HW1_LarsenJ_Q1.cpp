/*
CSC 134
M2HW1 - Gold
LarsenJ
2/16/2024
*/

#include <iostream>
#include <iomanip> // for setting the precision of output
#include <cstdlib> // for rand() function
using namespace std;

int main() {

    // ** Question 1: Banking Transactions **
    cout << "Question 1: Banking Transactions\n";
    string name;
    double balance, deposit, withdrawal;

    // Ask for the user's name
    cout << "Enter your name: ";
    getline(cin, name); // to allow spaces in the name

    // Ask for the starting balance, deposit, and withdrawal amounts
    cout << "Enter your starting account balance: $";
    cin >> balance;
    cout << "Enter amount to deposit: $";
    cin >> deposit;
    cout << "Enter amount to withdraw: $";
    cin >> withdrawal;

    // Calculate the final balance
    balance += deposit;  // Add deposit
    balance -= withdrawal; // Subtract withdrawal

    // Generate a random account number
    int accountNumber = rand() % 100000 + 100000; // Account number between 100000 and 199999

    // Display the results
    cout << fixed << setprecision(2); // Set two decimal places for currency formatting
    cout << "\nAccount Summary:\n";
    cout << "Name on the account: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Final Account Balance: $" << balance << endl;
    cout << endl;

    // ** Question 2: Modified M2LAB1 Program **
    cout << "Question 2: Modified M2LAB1 Program\n";
    double cubicFeet, costPerCubicFoot = 0.3, maxCostPerCubicFoot = 0.52;

    // Ask for the number of cubic feet
    cout << "Enter the number of cubic feet: ";
    cin >> cubicFeet;

    // Calculate the cost
    double totalCost = cubicFeet * costPerCubicFoot;

    // Ensure that the total cost does not exceed the max allowed
    if (costPerCubicFoot > maxCostPerCubicFoot) {
        cout << "Cost per cubic foot exceeds maximum allowable charge." << endl;
    }

    // Output the total cost with two decimal places
    cout << fixed << setprecision(2);
    cout << "Total cost for " << cubicFeet << " cubic feet is: $" << totalCost << endl;
    cout << endl;

    // ** Question 3: Pizza Party Calculation **
    cout << "Question 3: Pizza Party Calculation\n";
    int pizzasOrdered, slicesPerPizza, visitors;

    // Ask for the number of pizzas, slices per pizza, and number of visitors
    cout << "Enter the number of pizzas ordered: ";
    cin >> pizzasOrdered;
    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;
    cout << "Enter the number of visitors: ";
    cin >> visitors;

    // Calculate the total slices needed and the slices remaining
    int totalSlices = pizzasOrdered * slicesPerPizza;
    int slicesNeeded = visitors * 3;  // Each visitor gets 3 slices
    int slicesLeft = totalSlices - slicesNeeded;

    // Display the results
    cout << "Slices left over: " << slicesLeft << endl;
    cout << endl;

    // ** Question 4: Cheering Program for FTCC **
    cout << "Question 4: Cheering Program for FTCC\n";
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne, cheerTwo;

    // Concatenate the cheer messages
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Output the cheering message
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}
