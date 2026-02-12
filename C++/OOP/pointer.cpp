#include <iostream>
using namespace std;

int main() {
    int a=4;
    int* ptr=&a;
    cout<<"THE VALUE AT ADDRESS ptr IS "<<*ptr<<endl;


    // New Operator
    int* p=new int(40);
    cout<<"THE VALUE AT ADDRESS p IS "<<*p<<endl;

    int* arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"THE AT arr[0] IS "<<arr[0]<<endl;
    cout<<"THE AT arr[1] IS "<<arr[1]<<endl;
    cout<<"THE AT arr[2] IS "<<arr[2]<<endl;

    // Delete Operator
    delete[] arr;
    cout<<"THE AT arr[0] IS "<<arr[0]<<endl;
    cout<<"THE AT arr[1] IS "<<arr[1]<<endl;
    cout<<"THE AT arr[2] IS "<<arr[2]<<endl;
    return 0;
}