/*
1. Suppose thee is a condition where that a Base class is inheritating two or more Derived classes
2. And and element or say a memeber which is present in Base class is inheriated to both the class
3. And now there is a another derived class whose bases class are the earlier two deriverd classes
4. And again the new derived class is able to derived the elemnts ort= the mmembers from thw two new bases class
5. Now a Ambiguity is created weather whose element should it listen to
*/

/*
1. Here we are defining class A as Virtual Base Class
2. Rememeber that Grandfather class is considered as virtual class not Father class
3. Syntax : 
    class{{name-of-derived-class}} : virtual {{vibility-mode}} {{name-of-base-class}}
*/
 #include <iostream>
 using namespace std;
 
 class Student {
 protected:
    int rollno;
 
 private:
    
 
 public:
   void setrollno(int a){
      rollno=a;
   }
   void displayrollno(void){
      cout<<"Your Roll No is "<<rollno<<endl;
   }
    
 };
 class Test : virtual public Student { 
 protected:
    float maths;
    float physic;
 
 private:
    
 
 public:
    void setmarks(float m1,float m2){
      maths=m1;
      physic=m2;
    }
    void displaymarks(void){
      cout<<"The Marks Scored are : "<<endl<<"1. MATHS = "<<maths<<endl<<"2. PHYSIC = "<<physic<<endl; 
    }
 };
 class Sports : virtual public Student {
 protected:
   float score;
    
 
 private:
    
 
 public:
   void setscore(float s){
      score = s;
   }
   void displayscore(void){
      cout<<"Score are : "<<score<<endl;
   }

    
 };
 class Result : public Test,public Sports {
 protected:
    float total;
 
 private:
    
 
 public:
   void display(void){
      total=maths+physic+score;
      displayrollno();
      displaymarks();
      displayscore();
      cout<<"The Result is "<<total<<endl;
      
   }
    
 };


 int main() {
    Result S1;
    S1.setrollno(1001);
    S1.setmarks(94.0,89.0);
    S1.setscore(24.0);
    S1.display();
    return 0;
 }