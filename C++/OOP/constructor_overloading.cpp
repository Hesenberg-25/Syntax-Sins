#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;

public:
    void setnumber(int x,int y){
        a=x;
        b=y;
    }

    void printnumber(void){
        cout<<"THE COMPLEX NUMBER IS "<<a<<" + "<<b<<"i"<<endl;
    }
    // using constructor again and again we are doing system overloading
    Complex(void);
    Complex(int);
    Complex(int , int);
};

Complex :: Complex(void){
    a=0;
    b=0;
}

Complex :: Complex(int x){
    a=x;
    b=0;
}

Complex :: Complex(int x,int y){
    a=x;
    b=y;
}
int main() {
    Complex c1(4,5);
    c1.printnumber();
    Complex c2(4);
    c2.printnumber();
    Complex c3;
    c3.printnumber();
    return 0;
}