#include<iostream>
using namespace std;
class Employee //create a class
{
    //this is like our private life
    private: int a,b,c;//this is not shown by any value only function can call it
    
    //this is like our public life
    public:  int d,e ;//this value are called by any input type
    void setData(int a1,int b1,int c1);//Declaration
    void getData(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
    }
};
void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c =c1;
}
int main()
{
   Employee rk;
   rk.d =12;
   rk.e =13;
   rk.setData(1,2,3);
   rk.getData();
   return 0;
}

