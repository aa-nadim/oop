#include<iostream>
#include<conio.h>
using namespace std;

//pass by value
void display1(int num){
    num=20;
}

//pass by reference
void display2(int *num){
    *num=20;
}

int main()
{
    int x = 10;
    cout<<"Before calling the function x = "<<x<<endl;

    //pass by value
    display1(x);
    cout<<"After calling the function x = "<<x<<endl;

    //pass by reference
    display2(&x);
    cout<<"After calling the function x = "<<x<<endl;

    getch();
}
