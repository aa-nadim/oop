#include "constructorproject.h"
#include<iostream>
using namespace std;

ConstructorProject :: ConstructorProject()
{
    cout<<"Constructor is called"<<endl;
}

ConstructorProject :: ~ConstructorProject()
{
    cout<<"Destructor is called"<<endl;
}

void ConstructorProject :: display()
{
    cout<<"display is called"<<endl;
}
