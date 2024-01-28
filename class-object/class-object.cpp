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
