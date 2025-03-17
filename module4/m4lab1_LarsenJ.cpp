/*
CSC 134
m4lab1 - for loops
LarsenJ
3/17/2024
draw a box of characters several different ways
*/

#include <iostream>
/*
The line #include <iostream> in C++ is a preprocessor directive that tells 
the compiler to include the standard input/output stream library in your program.
The iostream library provides functionalities for input and output operations, such as 
printing to the screen and reading from the keyboard. Specifically, it allows you to use 
objects like std::cout for output and std::cin for input.
*/

using namespace std;
/*
The line using namespace std; in C++ is a directive that allows you to avoid having to 
prefix standard library components (like std::cout, std::cin, std::string, etc.) with std::.
In C++, the Standard Library functions, objects, and classes are part of the std namespace. 
By using the directive using namespace std;, you're telling the compiler that you want to use 
all the components in the std namespace directly without needing to specify std:: each time.
*/

int main()
{
    //New info discovered
    //any regular character can be char
    //unicode characters have to be strings

    string pixel = "😎";//use any one charcater or emoji
    int width;
    cout << "Enter the width" << endl;
    cin >> width;

    int height;
    cout << "Enter the height" << endl;
    cin >> height;
    const int SIZE = 5;
    // cout << pixel << endl;

    //three ways to run a loop
    //1. while loop
    cout << endl << endl << endl;

    int count = 0;
    while (count < 5)
    {
        cout << pixel;
        count ++;
    }
    cout << endl;
    cout << endl;
    cout << endl;

    //2.do while loop
    count = 0;
    do 
    {
        cout << pixel << "";
        count ++;

    }
    while (count < 5);
    cout << endl;
    cout << endl;

    //3. for loop
    //this is the one time using i for the variable name is ok
    //i stands for index
    cout << endl;

    cout << "\"" << pixel << " \" " << "  printed horrizontally(row)" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout <<  pixel <<  "";
    }
    cout << endl;
//here to help me see the spacing and be easier to read
    cout << endl;
    cout << "\"" << pixel << " \"" << "  printed vertically(column)" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << pixel << endl;
    }
    cout << endl;
//here to help me see the spacing and be easier to read
    cout << endl;
    cout << endl << "Printing a box " << width << " by " << height << endl;
    //this is a nested loop
    //for each row

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            cout << pixel << " ";
        }
        //go to next line
        cout << endl;
    }
    cout << endl;



}