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
    Complex(int ,int); 
    // this is a paramaterized constructor takes parameter
};

Complex ::Complex(int x,int y){
    a=x;
    b=y;
}
int main() {
    //Implicit call
    Complex c1(3,4);
    c1.displaynumber();

    //Explict call
    Complex c2=Complex(5,12);
    c2.displaynumber();
    return 0;
}