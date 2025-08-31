# Aim
To study and implement constructors and destructors in C++

# Software required
Visual studio code

Windows/Linux

# Theory
# 1. Constructor function
A constructor is a special member function of a class that is automatically invoked when an object of that class is created. Its primary role is to initialize the object’s data members.

# Key Characteristics
Same name as the class.

No return type, not even void.

Automatically called when an object is instantiated.

Can be overloaded (multiple constructors with different parameter lists).

# Types of Constructors
C++ supports several types of constructors, each serving a unique purpose:

# 1. Default Constructor
Takes no parameters.

Automatically provided by the compiler if no other constructor is defined.

Used to initialize objects with default values.

        cpp
            class Box {
            public:
                Box() {
                    cout << "Default constructor called!" << endl;
                }
            };

# 2. Parameterized Constructor
Accepts arguments to initialize data members with specific values.

Enables flexible object creation.

        cpp
            class Box {
            public:
                int length;
                Box(int l) {
                    length = l;
                }
            };

# 3. Copy Constructor
Initializes a new object using an existing object of the same class.

Syntax: ClassName(const ClassName &obj)

        cpp
            Box(Box &b) {
                length = b.length;
            }

# Constructor Overloading
You can define multiple constructors in a class with different parameter lists. This is called constructor overloading.

        cpp
            class Box {
            public:
                Box() { length = 0; }
                Box(int l) { length = l; }
            };   

# 2. Destructor function
A destructor is a special member function of a class that is automatically invoked when an object goes out of scope or is explicitly deleted. Its primary role is to release resources that the object may have acquired during its lifetime—like memory, file handles, or network connections.

Think of it as the cleanup crew that arrives after a party: quiet, efficient, and absolutely necessary.

# Key Characteristics of Destructors
Name: Same as the class, but prefixed with a tilde ~.

No parameters: Cannot accept arguments.

No return type: Not even void.

Automatic invocation: Called when an object is destroyed.

Cannot be overloaded: Only one destructor per class.

Cannot be inherited: But base class destructors are called automatically.

#  Syntax of a Destructor
        cpp
            class MyClass {
            public:
                ~MyClass() {
                    // Cleanup code
                }
            };
# When Is a Destructor Called?
Destructors are triggered in the following scenarios:

When a local object goes out of scope.

When a dynamically allocated object is deleted using delete.

When the program ends and global/static objects are destroyed.

# Why Use Destructors?
Destructors are essential for:

Memory management: Freeing dynamically allocated memory.

Resource deallocation: Closing files, releasing locks, etc.

Avoiding memory leaks: Ensuring resources are not left hanging.

# Example: Destructor in Action
    cpp
     #include <iostream>
    using namespace std;
    
    class Demo {
    public:
        Demo() {
            cout << "Constructor called" << endl;
        }
    
        ~Demo() {
            cout << "Destructor called" << endl;
        }
    };
    
    int main() {
        Demo obj; // Constructor runs
        return 0; // Destructor runs automatically
    }
Output:

Code

    Constructor called
    Destructor called

# Algorithm
# Program 1
Objective : default constructor inside class

Steps 

                1. Start
                
                2. Define a class Student
                
                Declare private data members:
                
                rollno (integer)
                
                name (character array of size 50)
                
                fee (double)
                
                Define a constructor:
                
                Prompt user to enter rollno, name, and fee
                
                Read and store the values in respective variables
                
                Define a member function display():
                
                Print the stored values in a formatted sentence
                
                3. In the main() function
                
                Create an object st of class Student
                
                This automatically calls the constructor and takes input
                
                Call st.display() to show the student details
                
                4. End

# Program 2
Objective : Default constructor outside class

Steps

                1. Start
                
                2. Define a class Student
                
                Declare private data members:
                
                rollno (integer)
                
                name (character array of size 50)
                
                fee (double)
                
                Define a constructor:
                
                Prompt user to enter rollno, name, and fee
                
                Read and store the values in respective variables
                
                Define a member function display():
                
                Print the stored values in a formatted sentence
                
                3. In the main() function
                
                Create an object st of class Student
                
                This automatically calls the constructor and takes input
                
                Call st.display() to show the student details
                
                4. End

# Program 3
Objective : parameterized constructor

Steps

                1. Start
                
                2. Define a class Construct
                
                Declare two private integer variables: a and b
                
                Define a parameterized constructor with two parameters x and y
                
                Assign x to a
                
                Assign y to b
                
                Display a message: "This is a parameterized constructor."
                
                3. Define a member function display()
                
                Print the values of a and b in the format:
                
                "a = <value of a>"
                
                "b = <value of b>"
                
                4. In the main() function
                
                Create an object ct of class Construct with arguments 10 and 20
                
                This invokes the parameterized constructor and initializes a = 10, b = 20
                
                Call the display() function using the object ct
                
                5. End

# Program 4
Objective : Copy constructor

Steps 

                1. Start
                
                2. Define a class Student
                
                Declare private data members:
                
                name (string)
                
                age (integer)
                
                3. Create a parameterized constructor
                
                Input: string n, int a
                
                Assign n to name
                
                Assign a to age
                
                4. Create a copy constructor
                
                Input: const Student &s (reference to another Student object)
                
                Copy s.name to name
                
                Copy s.age to age
                
                Display message: "Copy constructor called!"
                
                5. Define a member function display()
                
                Output the values of name and age in formatted text
                
                6. In the main() function
                
                Create object st1 using the parameterized constructor with values "Tanmay" and 19
                
                Call st1.display() to show original values
                
                Display message: "Original Object"
                
                Create object st2 using the copy constructor: Student st2 = st1
                
                Display message: "New object"
                
                Call st2.display() to show copied values
                
                7. End

# Program 5
Objective : destructor function

Steps

                1. Start
                
                2. Initialize a global variable
                
                count = 0 to keep track of the number of Books objects
                
                3. Define a class Books
                
                Private data members:
                
                title (string)
                
                author (string)
                
                price (float)
                
                4. Define the default constructor
                Increment count by 1
                
                Display: "No of objects created: " followed by current count
                
                5. Define the destructor
                Decrement count by 1
                
                Display: "No of objects remaining: " followed by current count
                
                6. In the main() function
                
                Create three objects: b1, b2, b3
                
                Each triggers the constructor and increments count
                
                Create a block scope { ... }
                
                Inside the block, create object b4
                
                Constructor is called, count becomes 4
                
                When block ends, b4 goes out of scope
                
                Destructor is called, count becomes 3
                
                7. End of main()
                
                Remaining objects b1, b2, b3 go out of scope
                
                Destructor is called for each, decrementing count to 0
                
                8. End
