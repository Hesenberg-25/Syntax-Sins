/*
RULES:
1. Virtual Function cannot be Static
2. It can be friend for another Class or Function
3. When it is presnt inside the Base Class it might not being used
4. If the class has a Virtual Function it is not needed to hav eth function inside the Derived Class(24)
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
    virtual void display(void){}; // Like if we commnet out the display from the CWHText then the Virtual Function will be called 
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