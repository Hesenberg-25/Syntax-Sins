#include <iostream>
using namespace std;

class Complex {
private:
    int a;
    int b;
    int c;

public:
    void setnumber(int x,int y=99,int z=100){
        a=x;
        b=y;
        c=z;
    }
    void printnumber(void);
};

void Complex :: printnumber(void){
    cout<<"THE VALUE OF a,b and c is "<<a<<","<<b<<" and "<<c<<endl;
} 
int main() {
    Complex c1,c2,c3;
    c1.setnumber(1,2,3);
    c1.printnumber();
     
    c2.setnumber(1,2);
    c2.printnumber();
     
    c3.setnumber(1);
    c3.printnumber();
    return 0;
}