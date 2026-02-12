#include <iostream>
using namespace std;

class Base1 {
protected:
    int data1;

private:
    

public:
    Base1(int a){
        data1=a;
        cout<<"Base1 Constructor is called"<<endl;
    }
    void displaybase1(void){
        cout<<"Value of data1 is "<<data1<<endl;
    }
};

class Base2 {
protected:
    int data2;

private:
    

public:
    Base2(int a){
        data2=a;
        cout<<"Base2 Constructor is called"<<endl;
    }
    void displaybase2(void){
        cout<<"Value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base1,public Base2{
// Here the order in which the base classes are called depends only onr the syntax above this line
protected:
    int derived1;
    int derived2;

private:
    

public:
    Derived(int m,int n,int o,int p):Base1(m),Base2(n){
        derived1=o;
        derived2=p;
        cout<<"Derived Constructor is called"<<endl;
    }
    void displayderived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main() {
    Derived S1(1,2,3,4);
    S1.displaybase1();
    S1.displaybase2();
    S1.displayderived();
    return 0;
}