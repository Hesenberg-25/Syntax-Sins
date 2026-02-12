#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void check();

public:
    void read();
    void change();
    void display();
} b;

void binary::read()
{
    cout << "ENTER THE BINARY NUMBER: ";
    cin >> s;
    check(); 
    // and internally we have runed the priavte program without th euser knowing it for the saftey
}

void binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "INVALID INPUT" << endl;
            exit(0); // stop program
        }
    }
}

void binary::change()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
}

void binary::display()
{
    cout << "THE OUTPUT IS: " << s << endl;
}

int main()
{
    b.read();
    //b.check(); -> here the chec is declared  as private and hence can't be access
    b.change();
    b.display();
    return 0;
}
