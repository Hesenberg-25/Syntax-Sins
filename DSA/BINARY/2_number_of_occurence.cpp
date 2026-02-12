// Using Lower and Upper Bound
/*#include <iostream>
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
    int first = -1;
    int last = -1;
    int low = 0;
    int high = a - 1;
    int lower = a;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target <= num[mid])
        {
            lower = mid;
            first = lower;
            last = lower;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (lower == a || num[lower] != target)
    {
        first = -1;
        last = -1;
        cout << "[" << first << "," << last << "]" << endl;
    }
    low = 0;
    high = a - 1;
    lower = a;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target < num[mid])
        {
            lower = mid;
            last = lower - 1;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << last-first+1 << endl;
    return 0;
}
*/
// Using Simple Binary Search

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
    int first = -1;
    int last = -1;
    int low = 0;
    int high = a - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == num[mid])
        {
            first = mid;
            last = mid;
            high = mid - 1;
        }
        else if (target >= num[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    low = 0;
        high = a - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (target == num[mid])
            {
                last = mid;
                low = mid + 1;
            }
            else if (target >= num[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    
    cout << last-first+1 << endl;
    return 0;
}