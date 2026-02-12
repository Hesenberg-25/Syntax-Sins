/*
SYNTAX :

class {{Derived-class-name}} : {{visiblity-mode}} {{Base1-class-name}},{{visiblity-mode}} {{Base2-class-name}}
*/
#include <iostream>
using namespace std;

class Base1 {
protected:
    int base1int;

private:
    

public:
    void set1value(int a){
        base1int=a;
    }
};

class Base2 {
protected:
    int base2int;

private:
    

public:
    void set2value(int a){
        base2int=a;
    }
};

class Derived : public Base1,public Base2{
protected:
    

private:
    

public:
    void show(void){
        cout<<"THE VALUE OF INT IN BASE 1 IS "<<base1int<<endl;
        cout<<"THE VALUE OF INT IN BASE 2 IS "<<base2int<<endl;
        cout<<"THE ADDITION OF VALUE IN BOTH BASES IS "<<base1int+base2int<<endl;
    }
};
int main() {
    Derived D1;
    D1.set1value(25);
    D1.set2value(5);
    D1.show();
    return 0;
}