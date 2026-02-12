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
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (num[i]==num[j])
            {
                cout<<"True";
                break;
            }
            
        }
        
    }
    
    return 0;
}