// if statement example2
// CSC 134
// M3Lab1 
// LarsenJ
// 2/24/2025
//game design


// compiler directives
// (required for the program to run)
#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main() 
{
    string choice1, choice2;
    
    // Random number generator setup
    mt19937 rng(static_cast<unsigned int>(time(0)));  // Mersenne Twister random engine
    uniform_int_distribution<int> dist(1, 100);      // Random number between 1 and 100

    // Declare variables to store random numbers for each choice
    int randomForChoice1 = 0, randomForChoice2 = 0;
  
    cout << "This is a simple game to generate math questions and see if you know the answers. Options will change every time and never be the same." << endl;
    cout << "Good Luck!" << endl;
    cout << "Choose Options A, B, or C" << endl;
    cout << "Type A, B or C: "; 
    cin >> choice1;

    // Generate random number based on choice1
    if (choice1 == "A") {
        randomForChoice1 = dist(rng);
        cout << "Random number for A: " << randomForChoice1 << endl;
    } 
    else if (choice1 == "B") {
        randomForChoice1 = dist(rng);
        cout << "Random number for B: " << randomForChoice1 << endl;
    }
    else if (choice1 == "C") {
        randomForChoice1 = dist(rng);
        cout << "Random number for C: " << randomForChoice1 << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    // Ask user for a second choice
    cout << "Again Type A, B, or C: ";
    cin >> choice2;

    // Generate random number based on choice2
    if (choice2 == "A") {
        randomForChoice2 = dist(rng);
        cout << "Random number for A: " << randomForChoice2 << endl;
    } 
    else if (choice2 == "B") {
        randomForChoice2 = dist(rng);
        cout << "Random number for B: " << randomForChoice2 << endl;
    }
    else if (choice2 == "C") {
        randomForChoice2 = dist(rng);
        cout << "Random number for C: " << randomForChoice2 << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    // Now we use the random numbers for choice1 and choice2 in the math problem
    string math1;  
    cout << "Lastly, choose A for addition or B for multiplication: ";
    cin >> math1;

    if (math1 == "A") {
        int answer1, answer2;
        answer1 = randomForChoice1 + randomForChoice2;  // Use the random numbers assigned to the choices
        cout << "Answer this problem: " << randomForChoice1 << " + " << randomForChoice2 << " = ?" << endl;
        cin >> answer2;
        
        if (answer1 == answer2) {
            cout << "Good job! That is correct." << endl;
        }
        else {
            cout << "I'm sorry, the answer was " << answer1 << endl;
        }
    }
    else if (math1 == "B") {
        int answer1, answer2;
        answer1 = randomForChoice1 * randomForChoice2;  // Use the random numbers assigned to the choices
        cout << "Answer this problem: " << randomForChoice1 << " x " << randomForChoice2 << " = ?" << endl;
        cin >> answer2;
        
        if (answer1 == answer2) {
            cout << "Good job! That is correct." << endl;
        }
        else {
            cout << "I'm sorry, the answer was " << answer1 << endl;
        }
    }
    else {
        cout << "Invalid math operation choice!" << endl;
    }

    cout << "Thanks for playing!" << endl; // this runs no matter what they choose
    return 0; // exit without error
}
