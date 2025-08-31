/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// destructor function

#include <iostream>
using namespace std;
int count=0;
class Books
{
    string title;
    string author;
    float price;

    public:
    Books()
    {
        count++;
        cout<<"No of objects created: "<<count<<endl;
    }
    ~Books()
    {
        count--;
        cout<<"No of objects remaining: "<<count<<endl;
    }
};
int main()
{
    Books b1,b2,b3;
    {
        Books b4;
    }
    return 0;
}

/*Output
No of objects created: 1
No of objects created: 2
No of objects created: 3
No of objects created: 4
No of objects remaining: 3
No of objects remaining: 2
No of objects remaining: 1
No of objects remaining: 0
*/
