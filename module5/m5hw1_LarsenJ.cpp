#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function for Question 1: Calculate average rainfall
void question1() {
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    cout << "Question 1: Calculate the average rainfall for three months.\n";
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    double average = (rainfall1 + rainfall2 + rainfall3) / 3.0;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << fixed << setprecision(2) << average << " inches." << endl;
    cin.ignore();  // To clear the input buffer
    cout << "Press [Enter] to continue...";
    cin.get();  // Wait for Enter to continue
}

// Function for Question 2: Calculate volume of a block
void question2() {
    double width, length, height;

    cout << "Question 2: Calculate the volume of a block.\n";
    cout << "Enter the width of the block: ";
    cin >> width;
    while (width <= 0) {
        cout << "The width must be greater than 0. Enter again: ";
        cin >> width;
    }

    cout << "Enter the length of the block: ";
    cin >> length;
    while (length <= 0) {
        cout << "The length must be greater than 0. Enter again: ";
        cin >> length;
    }

    cout << "Enter the height of the block: ";
    cin >> height;
    while (height <= 0) {
        cout << "The height must be greater than 0. Enter again: ";
        cin >> height;
    }

    double volume = width * length * height;
    cout << "The volume of the block is " << volume << " cubic units." << endl;
    cin.ignore();
    cout << "Press [Enter] to continue...";
    cin.get();
}

// Function for Question 3: Roman numeral converter
void question3() {
    int num;

    cout << "Question 3: Convert a number (1-10) to Roman numerals.\n";
    cout << "Enter a number (1 - 10): ";
    cin >> num;

    while (num < 1 || num > 10) {
        cout << "Please enter a number between 1 and 10: ";
        cin >> num;
    }

    switch (num) {
        case 1: cout << "The Roman numeral version of 1 is I." << endl; break;
        case 2: cout << "The Roman numeral version of 2 is II." << endl; break;
        case 3: cout << "The Roman numeral version of 3 is III." << endl; break;
        case 4: cout << "The Roman numeral version of 4 is IV." << endl; break;
        case 5: cout << "The Roman numeral version of 5 is V." << endl; break;
        case 6: cout << "The Roman numeral version of 6 is VI." << endl; break;
        case 7: cout << "The Roman numeral version of 7 is VII." << endl; break;
        case 8: cout << "The Roman numeral version of 8 is VIII." << endl; break;
        case 9: cout << "The Roman numeral version of 9 is IX." << endl; break;
        case 10: cout << "The Roman numeral version of 10 is X." << endl; break;
    }
    cin.ignore();
    cout << "Press [Enter] to continue...";
    cin.get();
}

// Function for Question 4: Geometry Calculator
void question4() {
    int choice;
    double radius, length, width, base, height;

    cout << "Question 4: Geometry Calculator.\n";
    cout << "Choose a shape to calculate the area of.\n";
    do {
        cout << "1. Calculate the area of a Circle\n";
        cout << "2. Calculate the area of a Rectangle\n";
        cout << "3. Calculate the area of a Triangle\n";
        cout << "4. Return to Menu\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the circle's radius: ";
            cin >> radius;
            while (radius < 0) {
                cout << "The radius cannot be less than zero. Enter again: ";
                cin >> radius;
            }
            double area = 3.14159 * pow(radius, 2);
            cout << "The area of the circle is " << area << endl;
        } else if (choice == 2) {
            cout << "Enter the rectangle's length: ";
            cin >> length;
            while (length < 0) {
                cout << "The length cannot be less than zero. Enter again: ";
                cin >> length;
            }
            cout << "Enter the rectangle's width: ";
            cin >> width;
            while (width < 0) {
                cout << "The width cannot be less than zero. Enter again: ";
                cin >> width;
            }
            double area = length * width;
            cout << "The area of the rectangle is " << area << endl;
        } else if (choice == 3) {
            cout << "Enter the base of the triangle: ";
            cin >> base;
            while (base < 0) {
                cout << "The base cannot be less than zero. Enter again: ";
                cin >> base;
            }
            cout << "Enter the height of the triangle: ";
            cin >> height;
            while (height < 0) {
                cout << "The height cannot be less than zero. Enter again: ";
                cin >> height;
            }
            double area = 0.5 * base * height;
            cout << "The area of the triangle is " << area << endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please choose a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    cin.ignore();
    cout << "Press [Enter] to continue...";
    cin.get();
}

// Function for Question 5: Distance Traveled
void question5() {
    double speed, time;

    cout << "Question 5: Calculate the distance traveled by a vehicle over time.\n";
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    while (speed < 0) {
        cout << "Speed cannot be negative. Enter again: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> time;
    while (time < 1) {
        cout << "Time must be at least 1 hour. Enter again: ";
        cin >> time;
    }

    cout << "Hour\tDistance Traveled\n";
    cout << "--------------------------------\n";
    for (int i = 1; i <= time; i++) {
        double distance = speed * i;
        cout << i << "\t" << distance << endl;
    }

    cin.ignore();
    cout << "Press [Enter] to continue...";
    cin.get();
}

// Function for the menu
void menu() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Question 1: Average Rainfall Calculation\n";
        cout << "2. Question 2: Volume of a Block\n";
        cout << "3. Question 3: Roman Numeral Conversion\n";
        cout << "4. Question 4: Geometry Calculator\n";
        cout << "5. Question 5: Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Please choose a number between 1 and 6.\n"; break;
        }
    } while (choice != 6);
}

int main() {
    menu();
    return 0;
}
