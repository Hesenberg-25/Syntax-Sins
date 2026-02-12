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
    int target;
    cout << "Enter the value of Target : " << endl;
    cin >> target;
    int low = 0;
    int high = a - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == num[mid])
        {
            cout << mid << endl;
        }
        else if (target < num[mid])
        {
            high = mid - 1;
        }
        else if (target > num[mid])
        {
            low = mid + 1;
        }
        else
        {
            cout << "Number not found" << endl;
        }
    }
    return 0;
}