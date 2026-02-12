/*
1. to keep in mind the concept of reuseability we get to use inheritance
2. it help us to use the members from other class to use in some another class
3. the original class is class the base class can be more than one
4. and the class where it is being used is called the derived class
5. TYPES OF CLASS :
---> A. single : from one single base class to another single derived class
---> B. multiple : from more than one base class to a single derived class
---> C. hierarchiecal : from a single base class to multiple derived class
---> D. multi_level : a derived class is base class for another derived class
---> E. hybrid : it is a kind of multiple inheritance where one class is not at all deived class with respect to another
*/

#include <iostream>
using namespace std;
class Emp
{
private:
public:
    int id;
    char name;
    Emp(){};
    Emp(int inid){
        id=inid;
    }
};

/*
SYNTAX FOR INHERITANCE :

=> class {{DERIVED-CLASS-NAME}} : {{VISIBILITY MODE}} {{BASE-CLASS-NAME}}
Note :
1. Default visibility mode is private
2. Private : Public members of (BASE CLASS) becomes Private memebers of (DERIVED CLASS)
3. Public : Public members of (BASE CLASS) becomes Public memebers of (DERIVED CLASS)
4. Private members of base class cant be inhaeritated
*/

class Pro : Emp
{
public:
    void setdata(int inid){
        id=inid;
    }
    int languageCode = 9;
    void displaydata(void){
        cout<<id<<endl;
        cout<<languageCode<<endl;
    }
};
int main()
{   
    Emp X(1001);
    Pro A;
    A.setdata(25);
    A.displaydata();
    return 0;
}