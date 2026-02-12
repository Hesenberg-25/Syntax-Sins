#include <iostream>
using namespace std;

class Base {
protected:
    int a;
    int b;

private:
    

public:
    Base(int i,int j):a(i),b(j){
        cout<<"Constructor called."<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
/*

Base(int i,int j):a(i),b(j)   =>4,6
Base(int i,int j):a(i),b(j+a) =>4,10
Base(int i,int j):b(j),a(i+b) =>Here there will be syantax error becuase as a is declacred before b this would give me garbage value for a

*/
int main() {
    Base(4,6);
    return 0;
}