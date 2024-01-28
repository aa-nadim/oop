# Constructor

what is a constructor?
-
- it is a special type of function that is used to `initialize the object`.

what are the properties of constructor?
-
- constructor is a special type of function.
- constructor has the same name as that of the class it belongs.
- it has no return type not even void.
- it is called automatically.

```
#include <iostream>
#include <conio.h>
using namespace std;

class Student
{

    public:
        //variables
        int id;
        double gpa;

        //functions
        void display()
        {
            cout << id << "  " << gpa << endl;
        }

        // default constructor
        Student()
        {
            cout << "This is a default constructor" << endl;
        }

        // parametrized constructor
        Student(int x, double y)
        {
           id = x;
           gpa = y;
        }

};

int main()
{
    Student();

    cout << "ID" << "  " << "GPA" << endl;
    cout << "-----------"<< endl;

    Student nadim(101,3.92);
    nadim.display();

    Student ainul(102,3.44);
    ainul.display();

    getch();
}

Output:
This is a default constructor
ID  GPA
-----------
101  3.92
102  3.44
```