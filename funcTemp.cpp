//Function Template
#include <iostream>
using namespace std;

template<class T>
    void show(T a,T b) 
    {
        cout <<"a :"<<a<<endl;
        cout <<"b :"<<b<<endl;
    }
int main()
{   
    int x=10,y=20;
    show(x,y); 
    return 0;
}