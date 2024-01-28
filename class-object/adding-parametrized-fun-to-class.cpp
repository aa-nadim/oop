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


    Student nadim,ainul;
    nadim.setValue(101, 3.92);
    nadim.display();

    ainul.setValue(102, 3.44);
    ainul.display();

    getch();
}
