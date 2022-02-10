#include <iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
     public:
     void set_rollNumber(int);
     void get_rollNumber(void);
};

void Student:: set_rollNumber(int r){
    roll_number = r;
}

void Student:: get_rollNumber(void);get_rollNumber(int r){
    cout<<"The roll number is "<<roll_number<<endl ;
}
    class Exam:public Student{
        protected:
        float maths;
        float physics;
        public:
        void set_marks(float,float);
        void get_marks(void);
    };
    void Exam::set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
int main()
{
    return 0;
}