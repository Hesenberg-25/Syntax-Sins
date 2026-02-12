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
        cout << "Enter the element at number " << i + 1 << " : ";
        cin >> num[i];
    }
    int low = 0, high = a - 1;
    int smallest = num[0];
    int mid;
    int index = -1;
    while (low <= high)
    {
        if (num[low] <= num[high])
        {
            if (num[low] < smallest)
            {
                index = low;
                break;
            }
        }

        mid = (low + high) / 2;
        if (num[low] <= num[mid])
        {
            if (num[low] < smallest)
            {
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            if (num[mid] < smallest)
            {
                index = mid;
            }
            high = mid - 1;
        }
    }
    cout << "The array has be rotated " << index << " times" << endl;
    return 0;
}