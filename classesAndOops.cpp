#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_(bin);
};
void binary::read(void) {
    cout<<"Enter a binary number"<<endl;
    cin >> s;
}
void chk_bin(void){
    for (int i = 0; i <s.length(); i++)
    {
        if (s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"incorrect binary format !!!"<<endl;
            exit(0);
        }
    }
        
}
int main()
{
    //OOPs --> classes and objects
    //c++ is also Called--> c with classes
    //class --> Extension of structures (in c)
    // structures had limitations
    //       -->members are public
    //       -->no methods

    // classes -->structures + more
    // classes -->can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in c++ are typedef
    // you can declare objects along with the class declaration like this
    /* class Employee {
        //class defination 
    }rohit ,shubham,harish;*/
    // rohit.salary = 8 makes no sense if salary is private

    // nesting of member function

   binary b;
   b.read();
   b.chk_bin();
}