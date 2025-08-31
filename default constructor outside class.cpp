/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// constructor outside class

#include <iostream>
#include <string>
using namespace std;

class Book 
{
    string title;
    string author;
    float price;

public:
    Book(); // Default constructor

    void display(); 
    
};

// Constructor definition
Book::Book() 
{
    cout << "Enter the book title: ";
    getline(cin, title);

    cout << "Enter the author name: ";
    getline(cin, author);

    cout << "Enter the price: ";
    cin >> price;
    

    cout << endl;
}

void Book::display()
{
        cout << "Title: " << title << ", Author: " << author << ", Price: " << price << endl;
}

int main() 
{
    Book b1;
    b1.display();
}


/* output for this code 

Enter the book title: Kitne Ghazi Aaye Kitne Ghazi gaye
Enter the author name: Lt. Gen. KJS Dhillon
Enter the price: 550

Title: Kitne Ghazi Aaye Kitne Ghazi gaye, Author: Lt. Gen. KJS Dhillon, Price: 550

*/
