#include <iostream>
using namespace std;

class Base {
protected :
    int a = 25;
private:
    int b;
public:
/*
TYPES OF MEMEBERS :    v=> IT KEEP PRIVATE       v=> IT KEEPS THEM PROTECTED      v=>  PUBLIC MEANS IT WILL REMAIN AS IT IS
                        PRIVATE DERIVATION    PROTECTED DERIVATION    PUBLIC DERIVATION
1. PRIVATE              NOT INHERITTED         NOT INHERIATED           NOT INHERITATED  => PRIVATE MEMBER CAN NEVER BE INHERITATED
2. PROTECTED            PRIVATE                 PROTECTED                 PROTECTED
3. PUBLIC               PRIVATE                 PROTECTED                 PUBLIC
*/

};

class Derived : public Base{

    public:
    void display(void){
        cout<<a;
    }
};
int main() {
    Derived der;
    der.display();
    return 0;
}