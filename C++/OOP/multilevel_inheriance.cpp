#include <iostream>
using namespace std;

class Student {
protected:
    int rollno;

public:
    void setrollno(int);
    void displayrollno(void);
};

void Student :: setrollno(int r){
    rollno=r;
}
void Student :: displayrollno(void){
    cout<<"THE ROLL NO IS "<<rollno<<endl;
}

class Exam : public Student {
protected:
    float maths;
    float physic;

public:
    void setmarks(float,float);
    void displaymarks(void);
};

void Exam :: setmarks(float m1,float m2){
    maths=m1;
    physic=m2;
}
void Exam ::  displaymarks(void){
    cout<<"MARKS IN MATHS ARE "<<maths<<endl;
    cout<<"MARKS IN PHYSIC ARE "<<physic<<endl;
}

class Result : public Exam {
protected:
    float percentage;

public:
    void setpercentage(void);
};

void Result :: setpercentage(void){
    displayrollno();
    displaymarks();
    cout<<"THE PERCENTAGE SCORED IS "<<(maths+physic)/2<<endl;
}
int main() {
    Result S1;
    S1.setrollno(11040);
    S1.setmarks(95.0,89.0);
    S1.setpercentage();
    return 0;
}