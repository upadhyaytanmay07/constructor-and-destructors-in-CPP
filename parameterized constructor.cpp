/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// parameterized constructor

#include<iostream>
using namespace std;

class Construct 
{
    int a, b;

public: 
    // Parameterized constructor
    Construct(int x, int y) 
    {
        a = x;
        b = y;
        cout << "\nThis is a parameterized constructor." << endl;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
}; // end of class

int main() 
{
    Construct ct(10, 20);
    ct.display();

    return 0;
}

/* output for this code

This is a parameterized constructor.
a = 10
b = 20

*/
