#include <iostream>
using namespace std;

/*
# Ambiguity No 1;
1. Here in the first ambiguity suppose there are two base class for a derived class
2. And bose base classes have a function with same name but differnet work
3. And if we try to class the funtion throught the derived class then a AMBIGUITY is creted
4. Weather which of the two class should the complier obey
5. Therefore this is solved by like synatx : 
    Base1 :: greet(); => like the {{name of the base class you wnat to use}} :: {{name of the similar funcation}}
*/

class Base1 {
protected:
    

private:
    

public:
    void greet(void){
        cout<<"How are you?"<<endl;
    }
};

class Base2 {
protected:
    

private:
    

public:
    void greet(void){
        cout<<"Kaise ho?"<<endl;
    }
};

class Derived : public Base1,public Base2{
protected:
    

private:
    

public:
    void greet(void){
        Base1 :: greet();
    }
};
/*
# Ambiguity No 2 ;
1. Now suppose there is a base class and a derived class and both are have the function with same name
2. And now the compiler is confused which one to use 
3. So by default it will give prirority to the function inside the derived class
4. And needed to mention about that if it should be used from the base class
*/
class B {
protected:
    

private:
    

public:
    void say(void){
        cout<<"Hello world"<<endl;
    }
};

class D : public B{
protected:
    

private:
    

public:
    void say(void){
        cout<<"Hello the world"<<endl;
    }
    void says(void){
        B::say();
    }
    
};
int main() {
    Derived D1;
    D1.greet();

    D D2;
    D2.says();
    return 0;
}