#include <iostream>
using namespace std;
class Student {
protected:
    float marks;

private:
    

public:
    void setData(float marks){
        this->marks=marks;
        /*
        
        1. "this" pointer id used when the class variable and the locla variable inside some public variable is same 
        2. And we wanr to point out which one is local and which one is class variable
        
        */
    }
    void getdata(void){
        cout<<"The MARKS scored are "<<marks<<endl;
    }
};
int main() {
    Student S1;
    S1.setData(9.16);
    S1.getdata();
    return 0;
}