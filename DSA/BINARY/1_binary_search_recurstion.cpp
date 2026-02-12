#include <iostream>
using namespace std;

int find(int arr[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (target == arr[mid])
    {
        return mid;
    }
    else if (target > mid)
    {
        return find(arr, mid + 1, high, target);
    }
    else if (target < mid)
    {
        return find(arr, low, mid - 1, target);
    }
}
int main()
{
    int a;
    cout << "ENTER THE NUMBER OF ELEMENT YOU WANT TO ENTER : ";
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
    find(num,low,high,target);
    return 0;
}