// CSC 134 
// M3HW1 - Silver 
// Larsen, Justin 
// 3/3/2025

#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <algorithm> // for transform
#include <cctype>   // for tolower
#include <ctime>

using namespace std;

//function prototypes/declarations
int question1();
int question2();
int question3();
int question4();


//function definitions (entire thing)
int main()
{
    //Question 1
    cout << "Question 1" << endl;
    question1();
    
    //Question 2
    cout << "Question 2" << endl;
    question2();

    //Question 3
    cout << "Question 3" << endl;
    question3();
    
    //Question 4
    cout << "Question 4" << endl;
    question4();
    
    return 0;
}

//
void convertInputLowerCase(string &input) 
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
}

int question1()
{
    string q1AnswerOne;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> q1AnswerOne;
    
    //convert the input into lowercase to prevent some errors
    convertInputLowerCase(q1AnswerOne);

    //if statement for question1
    if(q1AnswerOne == "yes")
    {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    }
    if(q1AnswerOne == "no")
    {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else
    {
        cout << "If you’re not sure… that’s OK." << endl;
    }

    return 0;
}

int question2()
{
    // Define variables
    double mealPrice;
    int inOrOut;
    cout << "Please enter the price of your meal" << endl;
    cin >> mealPrice;
    cout << "Please enter 1 if the order is dine in and 2 if it is to go." << endl;
    cin >> inOrOut;

    if(inOrOut == 1)
    {
        double taxPercent = 0.02;
        double taxAmount = (mealPrice * taxPercent);  // 
        double totalPrice = mealPrice + taxAmount;  //
        double newMealPrice = totalPrice + (totalPrice * 0.15);
        double mealTip = (totalPrice * 0.15); 

        // Print receipt
        cout << fixed << setprecision(2); 
        cout << "RECEIPT:\n";
        cout << "---------------------\n";
        cout << "Price     :         $" << mealPrice << endl;
        cout << "Tax   (2%):" << "         $" << taxAmount << endl;
        cout << "Subtotal  :         $" << totalPrice << endl;       
        cout << "Tip  (15%):" << "         $" << mealTip << endl;
        cout << "Total Due : " << "        $" << newMealPrice << endl;
        cout << "---------------------\n";
        cout << endl;
        return 0;  
    }
    else
    {
        double taxPercent = 0.02;
        double taxAmount = (mealPrice * taxPercent);  // 
        double totalPrice = mealPrice + taxAmount;  //


        // Print receipt
        cout << fixed << setprecision(2); 
        cout << "RECEIPT:\n";
        cout << "---------------------\n";
        cout << "Price     :         $" << mealPrice << endl;
        cout << "Tax   (2%):" << "         $" << taxAmount << endl;
        cout << "Total     :         $" << totalPrice << endl;       

        cout << "---------------------\n";
        cout << endl;
        return 0; 
    }

    
}

int question3()
{
    string storyLine;
    cout << "Help me tell a story" << endl;
    cout << "Type 1 for storyline A or Type 2 for storline B" << endl;
    cin >> storyLine;
    if(storyLine =="1")
    {
        string storyLine2;
        cout << "A cow flew over the moon in a jet" << endl;
        cout << "" << endl;
        cout << "Type 1 or 2 again" << endl;
        cin >> storyLine2;
        if(storyLine2 =="1")
        {
            cout << "Game Over! The story is over :(, sorry!" << endl;
            cout << "Choose a different option next time" << endl;
        }
        else
        {
            cout << "The cow landed at hogwarts and became the most powerful wizard to ever exist." << endl;
            cout << "The End!" << endl;
        }
    }

    else
    {
        cout << "Game Over!, Thee End" << endl;
    }

    return 0;
}

int question4()
{
    string choice1, choice2;
    
    // Random number generator setup
    mt19937 rng(static_cast<unsigned int>(time(0)));  // Mersenne Twister random engine
    uniform_int_distribution<int> dist(1, 100);      // Random number between 1 and 100

    int randomForChoice1 = 0, randomForChoice2 = 0;
  
    cout << "This is a simple game to generate math questions and see if you know the answers. Options will change every time and never be the same." << endl;
    cout << "Good Luck!" << endl;
    cout << "Choose Options A, B, or C" << endl;
    cout << "Type A, B or C: "; 
    cin >> choice1;

    // Generate random number based on choice1
    if (choice1 == "A") 
    {
        randomForChoice1 = dist(rng);
        cout << "Random number for A: " << randomForChoice1 << endl;
    } 
    else if (choice1 == "B") 
    {
        randomForChoice1 = dist(rng);
        cout << "Random number for B: " << randomForChoice1 << endl;
    }
    else if (choice1 == "C") 
    {
        randomForChoice1 = dist(rng);
        cout << "Random number for C: " << randomForChoice1 << endl;
    }
    else 
    {
        cout << "Invalid choice!" << endl;
    }

    // Ask user for a second choice
    cout << "Again Type A, B, or C: ";
    cin >> choice2;

    // Generate random number based on choice2
    if (choice2 == "A") 
    {
        randomForChoice2 = dist(rng);
        cout << "Random number for A: " << randomForChoice2 << endl;
    } 
    else if (choice2 == "B") 
    {
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
    return 0;
}