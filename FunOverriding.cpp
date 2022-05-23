#include <iostream>
using namespace std;
class fun1
{
public:
    void info()
    {
        cout << "function from fun1 class !"<<endl;
    }
};
class fun2:public fun1
{
    public:
    void info()
    {
        cout<<"function from fun2 class"<<endl;
    }
};
int main()
{
    fun1 f1;
    f1.info();
    
    fun2 f2;
    f2.info();
    return 0;
}