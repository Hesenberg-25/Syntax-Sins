#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    // something some variable are needed to defined toward the class so that each and every object of the class is needed to accesss it
    // staic datatype is insiatilized to zero
    public:
        void setdata();
        void getdata();
        static void getcount(void);
    
};

int employee :: count; // here the global declaration is done for count variable and is defined to 0
void employee ::getcount(void){
    cout<<"THE VALUE OF COUNT IS "<<count<<endl;
    // cout<<id will throw error as id is not static data type
}
// the static funcation can only access the staic variable
void employee :: setdata(void){
    cout<<"ENTER THE EMPLOYEE ID : ";
    cin>>id;
    count++;
}
void employee :: getdata(void){
    cout<<"EMPLOYEE ID IS "<<id<<" AND NO IS "<<count<<endl;
}

int main(){
    employee durvesh,patil;
    durvesh.setdata();
    durvesh.getdata();
    durvesh.getcount();
    employee :: getcount;
    patil.setdata();
    patil.getdata();
    employee :: getcount;
    // this type of static funcation can be access without defining object
    return 0;
}