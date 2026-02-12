/*
1. Abstarct BaseClass:

    --> A classs made by keeping in mind the Ides that it could only be used as a BaseClass and later we are needed to add more element or function or any other Members in the DerivedClass
    --> And also be defined as a Class which have atleast one Pure Virtual Function

2. Pure Virtual Function

    --> A Virtual Class which is defined inside the Abstaract BaseClass and cannot be used independently
    --> Like you need to define a Specific Block Of Code in the Derived Class so that the Base Class remains Abstract class
    --> Synatx (30)
*/

#include <iostream>
using namespace std;

class CWH {
protected:
    string title;
    float rating;

private:
    

public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(void)=0;
};
class CWHVideo : public CWH{
protected:
    float VideoLength;

private:
    

public:
    CWHVideo(string s,float r,float vL):CWH(s,r){
        VideoLength=vL;
    }
    void display(void){
        cout<<"Title of Video is "<<title<<endl;
        cout<<"Rating of Video is "<<rating<<" out of 5 Star"<<endl;
        cout<<"Runtime of Video is "<<VideoLength<<endl;
        cout<<endl;
    }
};

class CWHText :public CWH {
protected:
    int words;

private:
    

public:
    CWHText(string s,float r,int wc):CWH(s,r){
        words=wc;
    }
    void display(void){
        cout<<"Title of Text Tutorial is "<<title<<endl;
        cout<<"Rating of Text Tutorial is "<<rating<<" out of 5 Star"<<endl;
        cout<<"Words of Text Tutorial is "<<words<<endl;
    }
};
int main() {
    string Title="Python Tutorial";
    float RunTime=4.56;
    float Rating=4.5;
    int Words=452;

    CWHVideo T1(Title,Rating,RunTime);
    CWHText T2(Title,Rating,Words);

    CWH *tuts[2];
    tuts[0]=&T1;
    tuts[1]=&T2;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}