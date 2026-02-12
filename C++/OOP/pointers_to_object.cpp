#include <iostream>
using namespace std;
class Complex
{
protected:
    int a;
    int b;

private:
public:
    void getdata(void){
        cout << "The value of Real part is " << a << endl;
        cout << "The value of Imagainary part is " << b << endl; 
    }
    void setdata(int i, int j){
        a = i;
        b = j;
    }
};
int main()
{
    Complex C1;
    C1.setdata(4, 3);
    C1.getdata();

    // New Operator
    Complex *p = new Complex;
    (*p).setdata(5,12);
    (*p).getdata();

    // Using Arrow Operator
    Complex *ptr = new Complex;
    ptr->setdata(45,50);
    ptr->getdata();

    // Using Array 
    Complex *pt=new Complex[3];
    pt->setdata(1,4);
    pt->getdata();
    (pt+1)->setdata(4,1);
    (pt+1)->getdata();
    (pt+2)->setdata(11,13);
    (pt+2)->getdata();
    return 0;
}