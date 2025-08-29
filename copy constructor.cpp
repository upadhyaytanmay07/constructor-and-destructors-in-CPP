/* Tanmay upadhyay
PRN 24070123120
ENTC B2 */

// copy constructor

#include <iostream>
using namespace std;

class Student 
{
    int age;
    string name;

public:
    // Parameterized constructor
    Student(string n, int a) 
    {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) 
    {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    void display();
}; // end of class

void Student::display() 
{
    cout << "Name : " << name << endl << "Age : " << age << endl;
}

int main() 
{
    Student st("Tanmay", 19); 
    st.display();

    return 0;
}

/* output for this code

Name : Tanmay
Age : 19

*/
