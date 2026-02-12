#include <iostream>
using namespace std;

class BaseClass {
protected:
    

private:
    

public:
    int var_base;
    void display(void){
        cout<<"The value of var_base is "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
protected:
    

private:
    

public:
    int var_derived;
    void display(void){
        cout<<"The value of var_base is "<<var_base<<endl;
        cout<<"The value of var_derived is "<<var_derived<<endl;
    }
};
int main() {
    BaseClass * base_class_pointer;              // Here a pointer is created for the BaseClass
    BaseClass obj_base;                          // Here a object is created for BaseClass
    DerivedClass * derived_class_pointer;        // Here a object is created for DerivedClass
    DerivedClass obj_derived;                    // Here a object is created for DerivedClass
    base_class_pointer=&obj_derived;             // Here the pointer created for the BaseClass is address to the object of DerivedClass
    base_class_pointer->var_base=34;
    base_class_pointer->display();
    /*
    1. Here although we have addressed the object oF DerivedClass to the pointer that of the BaseClass
    2. Then to it will run the "display" funcation that of the BaseClass as this is default
    3. And to overcome this we need to use "Virtual Function Concept"
    */
    // base_class_pointer->obj_derived=344; This is not possible as even the pointer of BaseClass is address to that of object of DerivedClass then to we are not able to ccess them
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=79;
    derived_class_pointer->display();
    return 0;
}