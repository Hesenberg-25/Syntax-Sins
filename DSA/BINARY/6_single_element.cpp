/* 
1. Before the single element is found the first number is odd and second one is even in the pair
2. But after this the first element become even and seconds become odd
*/
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements you want to enter : ";
    cin >> a;
    int num[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter the element at no  " << i + 1 << " : ";
        cin >> num[i];
    }
    int low = 1;
    int high = a - 2;
    while (low<=high)
    {
        if (num[0]!=num[1])
        {
            cout<<num[0]<<endl;
        }
        if (num[a-1]!=num[a-2])
        {
            cout<<num[a-1]<<endl;
        }
        int mid=(low+high)/2;
        if (num[mid]!=num[mid+1] && num[mid]!=num[mid-1])
        {
            cout<<num[mid];
        }
        
        if ((mid%2==0 && num[mid]==num[mid+1]) || (mid%2==1 && num[mid-1]==num[mid]))
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
        
        
        
        
    }
    
    return 0;
}