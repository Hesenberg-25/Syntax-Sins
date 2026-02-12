#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    void displaynumber(void)
    {
        cout << "THE COMPLEX NUMBER IS " << a << " + " << b << "i" << endl;
    }
    void getcomplex(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Complex sumcomplex(Complex p,Complex q);
};

Complex sumcomplex(Complex p,Complex q){
    Complex o ;
    o.getcomplex((p.a+q.a),(p.b+q.b));
    return o;
}
int main()
{
    Complex m,n,o;
    m.getcomplex(1,4);
    m.displaynumber();
    n.getcomplex(5,8);
    n.displaynumber();
    o=sumcomplex(m,n);
    o.displaynumber();
    return 0;
}