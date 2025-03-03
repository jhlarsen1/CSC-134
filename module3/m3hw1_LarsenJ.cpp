// CSC 134 
// M3HW1 - Silver 
// Larsen, Justin 
// 3/3/2025

#include <iostream>
#include <string>
#include <random>
#include <algorithm> // for transform
#include <cctype>   // for tolower

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
    //Question 3
    cout << "Question 3" << endl;
    //Question 4
    cout << "Question 4" << endl;
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
    return 0;
}

int question3()
{
    return 0;
}

int question4()
{
    return 0;
}