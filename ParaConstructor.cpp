#include <iostream>
using namespace std;
class ParaCons
{
    public:
    ParaCons(int a,int b)
    {
        int sum = a + b;
        cout<<"Sum is :"<<sum<<endl;
    }
};
int main()
{
    int a,b;
    ParaCons p(10,20);
    return 0;
}