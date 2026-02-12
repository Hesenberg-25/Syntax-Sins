#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Enter the number of elements you want to enter : ";
    cin >> a;
    int num[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter the element at no  " << i + 1 << " : ";
        cin >> num[i];
    }

    int low = 0;
    int high = a - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (num[mid] > num[mid + 1])
        {
            high = mid;
        }

        else
        {
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}