#include <iostream>
using namespace std;

class Shop {
protected:
    int id;
    float price;

private:
    

public:
    void setData(int a,float b){
        id=a;
        price=b;
    }
    void getData(void){
        cout<<"ID of Item is "<<id<<endl;
        cout<<"Price of Item is "<<price<<endl;
    }
};
int main() {
    int size;
    cout<<"ENTER HOW MANY ITEMS YOU WNAT OT BUY ";
    cin>>size;
    Shop *ptr=new Shop[size];
    Shop *ptrTemp=ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"ENTER THE ID ";
        cin>>p;
        cout<<"Enter the Price ";
        cin>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}