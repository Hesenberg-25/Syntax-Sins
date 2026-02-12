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
            break;
        }
        // Left Sorted
        if (num[low] <= num[mid])
        {
            if (num[low] <= target && target<num[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (num[mid]<target && target<=num[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
        }
        
    }

    return 0;
}