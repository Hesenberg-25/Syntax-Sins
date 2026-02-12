#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number of elements you want to enter : ";
    cin >> a;

    int num[a];
    for (int i = 0; i < a; i++)
        cin >> num[i];

    int low = 0, high = a - 1;
    int smallest = num[0];

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // Left half is sorted
        if (num[low] <= num[mid])
        {
            smallest = min(smallest, num[low]);
            low = mid + 1;
        }
        // Right half is sorted
        else
        {
            smallest = min(smallest, num[mid]);
            high = mid - 1;
        }
    }

    cout << "Smallest number is : " << smallest << endl;
    return 0;
}
