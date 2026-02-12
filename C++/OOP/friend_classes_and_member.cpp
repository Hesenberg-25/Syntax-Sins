#include <iostream>
using namespace std;

class Complex; // this is called forward declaration
class Calculator
{
private:
    int a, b;

public:
    int sum(int x, int y)
    {
        a = x;
        b = y;
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
    int sumcompcomplex(Complex, Complex);
};

class Complex
{
private:
    int a;
    int b;

public:
// sometimes there are more than one element which are need to be friend
// then declare the whole class as the friend
    /*friend int Calculator ::sumrealcomplex(Complex, Complex);
    friend int Calculator ::sumcompcomplex(Complex, Complex);*/

    friend class Calculator;
    // here we have declared the whole classas the friend
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void displaydata(void)
    {
        cout << "THE COMPLEX NUMBER IS " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumrealcomplex(Complex x, Complex y)
{
    cout << (x.a + y.a) << endl;
}
int Calculator ::sumcompcomplex(Complex x, Complex y)
{
    cout << (x.b + y.b) << endl;
}
int main()
{

    Complex m, n, o;
    Calculator c;
    m.setdata(3, 4);
    n.setdata(5, 12);
    c.sumrealcomplex(m, n);
    c.sumcompcomplex(m, n);
    return 0;
}