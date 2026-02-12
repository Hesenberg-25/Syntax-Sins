#include <iostream>
using namespace std;

int main()
{
    int final[2];
    int a;
    cout << "ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ";
    cin >> a;
    int num[a];
    for (int i = 0; i < a; i++)
    {
        cout << "ENTER THE ELEMENT NO " << i + 1 << " : ";
        cin >> num[i];
    }
    int val;
    cout << "ENTER THE DESIRED NUMBER ";
    cin >> val;
    int first = -1;
    int last = -1;
    for (int i = 0; i < a; i++)
    {
        if (num[i] == val)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }

    cout << "[" << first << "," << last << "]";
    return 0;
}
