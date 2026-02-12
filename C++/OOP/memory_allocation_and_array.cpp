#include<iostream>
using namespace std;

class Shop
{
private:
    int itemid[100];
    float itemprice[100];  
    int itemno =0;
    // variable array is be declared
    
public:
    
    void setprice(void);
    void displayprice(void);
};

void Shop :: setprice(void){
    cout<<"ENTER THE ITEM ID : ";
    cin>>itemid[itemno];
    cout<<"ENTER ITEM PRICE : ";
    cin>>itemprice[itemno];
    itemno++;
}

void Shop :: displayprice(void){
    for (int i = 0; i < itemno; i++)
    {
        cout<<"THE ITEM ID IS "<<itemid[i]<<" AND PRICE IS "<<itemprice[i]<<endl;
    }
    
}

int main(){
    int c;
    cout<<"HOW MANY ITEM YOU WANT TO ENTER : ";
    cin>>c;
    Shop dukkan;
    for (int i = 0; i < c; i++)
    {
        dukkan.setprice();
    }
    dukkan.displayprice();
    return 0;
}