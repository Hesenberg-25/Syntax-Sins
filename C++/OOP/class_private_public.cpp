#include<iostream>
using namespace std;

// here we are declaring a class called as employee
class employee{
    // each class has two part private and public
        private: 
        // his part is to be altered or chnage and is menat to secure the data
        // and if you want to access something thoeugh it you need to go though public part
        int a,b,c;
        public:
        // here it is allowed to do antthing and it do not cause harm to the peivate data
        // all set of code to access it done thoufh this part
        int d,e;
        void setdata(int a1,int b1,int c1); // here two function are declared and codeed
        void getdata(){
            cout<<"THE VALUE OF a IS "<<a<<endl;
            cout<<"THE VALUE OF b IS "<<b<<endl;
            cout<<"THE VALUE OF c IS "<<c<<endl;
            cout<<"THE VALUE OF d IS "<<d<<endl;
            cout<<"THE VALUE OF e IS "<<e<<endl;
        }
    }x; // you cna also delcare the object jsut afetr declaring the object

void employee :: setdata (int a1,int b1, int c1){ // :: -> these are Scope Resolution Operator
    // they are used to definr that this function belong to this class
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee x; // here the 'x' can be called as the object inside the employee class
    x.d=34;
    x.e=43;
    x.setdata(1,2,4);
    x.getdata();
    // x.a=134 is not allowedas you can't access the private part data through the main funaction
    return 0;
}