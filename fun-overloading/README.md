# function Overloading

```
// Function Overloading
#include<iostream>
#include<conio.h>
using namespace std;

void sum(int x,int y){
    int add = x+y;
    cout<<add<<endl;
}

void sum(int x,int y, int z){
    int add = x+y+z;
    cout<<add<<endl;
}

void singleValue(int x){
    cout<<x<<endl;
}
void singleValue(double x){
    cout<<x<<endl;
}

int main()
{
    sum(10,20);
    sum(10,20,30);

    singleValue(100);
    singleValue(5.9999);
    
    getch();
}


Output:
30
60
100
5.9999
```