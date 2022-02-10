#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "constuctor called" << endl;
    }
    ~A()
    {
        cout << "Distructor called" << endl;
    }
};
int main()
{
    A a1;
    int b = 1;
    if (b == 1)
    {
        A a2;
    }
}