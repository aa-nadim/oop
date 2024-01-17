#include "destructorproject.h"
#include <iostream>
using namespace std;

destructorproject :: destructorproject()
{
    cout<<"Constructor is called"<<endl;
}
destructorproject :: ~destructorproject()
{
    cout<<"Destructor is called"<<endl;
}

void destructorproject :: display()
{
     cout<<"Display  is called"<<endl;
}
