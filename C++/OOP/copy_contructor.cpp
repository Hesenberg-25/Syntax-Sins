#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // copy contructor help us to copy the the content inside the constructor into for other object which belong to another object form use
    // even if you dont code the copy contructor compalier uses the the buid in copy construcotr for that
    Number(const Number &obj) 
    {
        a = obj.a;
    }

    void setnumber(int num)
    {
        a = num;
    }

    void displaynumber(void)
    {
        cout << "THE NUMBER ENTERED IS " << a << endl;
    }
};

int main()
{
    Number x,y,z,z1;
    x.displaynumber();

    y.displaynumber();

    z.setnumber(45);
    z.displaynumber();

    z1=z;
    // Number z1(z); can also be used for that
    z1.displaynumber();

    return 0;
}
