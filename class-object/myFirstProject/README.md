# creating separate files for class

main.cpp
-
```
#include <iostream>
#include "myfirstclass.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    myFirstClass obj_1;

    obj_1.display();
    return 0;
}
```

myfirstclass.h
-
```
#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include "myfirstclass.h"

class myFirstClass
{
    public:
        myFirstClass();

        void display();

    protected:

    private:
};

#endif // MYFIRSTCLASS_H
```

myfirstclass.cpp
-
```
#include "myfirstclass.h"
#include<iostream>
using namespace std;

myFirstClass::myFirstClass()
{
    //ctor
    cout<< "Inside the constructor"<<endl;
}

void myFirstClass :: display()
{

    cout<<" Inside the display function"<<endl;
}
```
