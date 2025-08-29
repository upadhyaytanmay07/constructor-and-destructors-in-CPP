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
