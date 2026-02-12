#include <iostream>
using namespace std;

// it help us to destroy the contructor after its use is done so that it's space can be used again and again
// detructor do not take any argumet nor does it return any value
int count=0;
class Num {
private:
    

public:
    Num(void){
        count++;
        cout<<"CONSTRUCTOR IS CALLED FOR OBJECT NO "<<count<<endl;
    }
    ~Num(void){
        cout<<"DESTRUCTOR  IS CALLED FOR OBJECT NO "<<count<<endl;
        count--;
    }
};
int main() {
    cout<<"START OF MAIN"<<endl;
    cout<<"FIRST OBJECT IS CREATED n1"<<endl;
    Num n1;
    // here the block is created 
    // when the complier realizes that there is no use of this in the futher code we use this
    // and thus it help us to empty the unwanted space
    {   cout<<"ENTERING THE LOOP"<<endl;
        cout<<"TWO MORE OBJECT ARE CREATED n2,n3"<<endl;
        Num n2;
        Num n3;
        cout<<"EXITING THE LOOP"<<endl;
    }
    cout<<"BACK TO MAIN"<<endl;
    return 0;
}