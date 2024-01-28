# Class Objects

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

};

int main()
{
     cout << "ID" << "  " << "GPA" << endl;
     cout << "-----------"<< endl;

    Student nadim,ainul;

    nadim.id = 101;
    nadim.gpa = 3.38;
    cout << nadim.id << "  " << nadim.gpa << endl;

    ainul.id = 102;
    ainul.gpa = 3.44;
    cout << ainul.id << "  " << ainul.gpa << endl;

    getch();
}

Output:
ID  GPA
-----------
101  3.38
102  3.44
```

adding function to class
-
```
// adding function to class
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
};

int main()
{

     cout << "ID" << "  " << "GPA" << endl;
     cout << "-----------"<< endl;

    Student nadim,ainul;
    
    nadim.id = 101;
    nadim.gpa = 3.38;
    nadim.display();


    ainul.id = 102;
    ainul.gpa = 3.44;
    ainul.display();

    getch();
}

```
adding parametrized function to class
-
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

        void setValue(int x, double y)
        {
            id = x;
            gpa = y;
        }

};

int main()
{

     cout << "ID" << "  " << "GPA" << endl;
     cout << "-----------"<< endl;

    Student s1,s2;
    s1.setValue(101, 3.92);
    s1.display();

    s2.setValue(102, 3.44);
    s2.display();

    getch();
}
```