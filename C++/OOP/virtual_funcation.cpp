#include <iostream>
using namespace std;

class BaseClass {
protected:
    

private:
    

public:
    int var_base=1;
    virtual void display(void){  // Here we have defined the display funaction into Virtual Funcation to override the default way
        cout<<"The value of var_base is "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
protected:
    

private:
    

public:
    int var_derived=2;
    void display(void){
        cout<<"The value of var_base is "<<var_base<<endl;
        cout<<"The value of var_derived is "<<var_derived<<endl;
    }
};
int main() {
    BaseClass * bcptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    bcptr=&obj_derived;
    bcptr->display();
    return 0;
}