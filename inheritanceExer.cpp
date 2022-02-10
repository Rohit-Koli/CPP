#include <iostream>
using namespace std;

class Base1
{   public:
    void greet(){
        cout << "How are you ?"<<endl;
    }
};
class Base2
{   public:
    void greet(){
        cout << "kaise hon ?"<<endl;
    }
};

class Derived:public Base1,public Base2{
    int a;
    public :
        void greet(){
            Base1::greet();
    }
};
class B{
    public :
    void say(){
        cout << "Hello world"<<endl;
    }
};
class D{
    int a;
    public :
    void say(){
        cout<<"Hello Rk"<<endl;
    }
};
int main()
{
    //ambiguity1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();

    // ambiguity2
        B b;
        b.say();

        D d;
        d.say();

    return 0;
}