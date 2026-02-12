#include <iostream>
using namespace std;

class Base
{
private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int Base ::getdata1(void)
{
    return data1;
}
int Base ::getdata2(void)
{
    return data2;
}


class Derived : private Base // here we are using private visibility mode so the public of base class is priavte of derived class => (43)
{
private:
    int data3;

public:
    void process();
    void display();
};

void Derived :: process(){
    setdata(); // and hence we need to code setdata inside the code of public part odfthe derived part and can't be called direclty in the main function
    data3=data2*getdata1();
}
void Derived :: display(){
    cout<<"THE VALUE OF data1 IS "<<getdata1()<<endl;
    cout<<"THE VALUE OF data2 IS "<<data2<<endl;
    cout<<"THE VALUE OF data3 IS "<<data3<<endl;
}
int main()
{
    Derived der;
    der.process();
    der.display();
    return 0;
}