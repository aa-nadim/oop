#include<iostream>
using namespace std;

class base{
public:
    int a;
};

class new1:virtual public base{
public:
    int b;
};

class new2:virtual public base{
public:
    int c;
};

class derive:public new1, public new2{
public:
    void get(){cin>>a>>b>>c;}
    void add(){cout<<a+b+c<<endl;}
};

int main()
{
    derive ob;
    ob.get();
    ob.add();

    return 0;
}
