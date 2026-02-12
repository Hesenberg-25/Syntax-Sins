#include <iostream>
using namespace std;

int main() {
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
    cout<<"ENTER THE VALUE : ";
    cin>>val;
    int k=0;
    for (int i = 0; i < a; i++)
    {
        if (num[i]!=val)
        {
           num[k]=num[i];
           k++;     
        }
        
    }
    for (int j = k; j < a; j++)
    {
        num[j]=-1;
    }
    
    for (int k = 0; k < a; k++)
    {
        cout << num[k] << " ";
    }
    return 0;
}