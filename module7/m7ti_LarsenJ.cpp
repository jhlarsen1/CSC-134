#include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// norrisa
// 4/29/24
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant 
{
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) 
    {
		name = n;
		rating = r;
	}
	// getters and setters
    Restaurant ()
    {
        //sets default
    }
    void setName(string n) 
    {
        name = n; 
    }
    void setRating(double r) 
    {
        rating = r;
    }
    string getName() const 
    {
        return name;
    }
    double getRating() const 
    {
        return rating;
    }
    void showInfo()
    {
        cout << "Restaurant Name: ";
        cout << this->name << endl;
        cout << "Rating: ";
        cout << this->rating << endl;
    }
  
};

int main() 
{
    cout << "M7T1 - Restaurant Reviews" << endl;

    //create a sample restaurant
    Restaurant rest1 = Restaurant("mi Casita", 3.5);
    Restaurant rest2 = Restaurant();
    cout << "Enter restaurant name: ";
    string name;
    //cin.ignore();
    getline(cin, name);
    rest2.setName(name);
    cout << "Enter restaurant rating: ";
    double rating;
    cin >> rating;
    rest2.setRating(rating);
    //print out restaurant info
    rest1.showInfo();
    rest2.showInfo();


    return 0;

}