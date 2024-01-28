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
