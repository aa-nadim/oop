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
