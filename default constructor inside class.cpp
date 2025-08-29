/* Tanmay upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;

class Student
{
    // public: 
    int rollno;
    char name[50];
    double fee;
    public:

    Student() // constructor function
    {
     cout<<"Enter the roll no : ";
     cin>>rollno;
     cout<<"\nEnter the name : ";
     cin>>name;
     cout<<"\nEnter the fee : ";
     cin>> fee;
     cout<<endl; 

    }
    void display()
    {
        cout<<"The name is "<<name<<","<<" roll no is "<<rollno<<","<<" and fees is "<<fee<<endl;

    }

}; // end of class

int main()
{
    Student st;
    st.display();

}

/* output for this code 

Enter the roll no : 120

Enter the name : Tanmay

Enter the fee : 12000

The name is Tanmay, roll no is 120, and fees is 12000

*/
