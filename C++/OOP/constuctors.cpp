#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;

public:
    void setnumber(int x, int y){
        a=x;
        b=y;
        
    }
    void displaynumber(void){
        cout<<"THE COMPLEX NO IS "<<a<<" + "<<b<<"i"<<endl;
    }
    Complex(void); 
    // this is a default constructor as it take no parameter
};

Complex ::Complex(void){
    a=10;
    b=20;
}
int main() {
    Complex c1;
    c1.displaynumber();
    return 0;
}
/*
✔ Has the same name as the class and declared in pubic sector
✔ Has NO return type (not even void)
✔ Is automatically invoked when an object is created
✔ Is mainly used to initialize data members and cannot refer to address
✔ sometimes we donnot allocote value to the variable sowe use to save us from the gabage value
✔ they are of two types default and parametric

*/