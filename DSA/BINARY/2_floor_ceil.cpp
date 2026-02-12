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
    int lower = a;
    
    // Code for Finding Ceil
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target <= num[mid])
        {
            lower = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "The Ceil for given number is " << num[lower] << endl;

    // Code for Finding Floor
    low = 0;
    high = a - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (num[mid]<=target)
        {
            lower = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "The Floor for given number is " << num[lower] << endl;
    return 0;
}