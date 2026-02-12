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
    int area=0;
    int height;
    int width;
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            height=min(num[i],num[j]);
            width=j-i;
            int area2=height*width;;
            if (area2>area)
            {
                area=area2;
                
            }
            
        }
        
    }
    cout<<area;
    return 0;
}//1,8,6,2,5,4,8,3,7