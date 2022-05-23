#include <iostream>
using namespace std;
class info
{
    public:
    void Stud()
    {
        cout<<"Student Name is : ROHIT KOLI "<<endl;
        cout<<"Student aim is to Become a Software Devloper !"<<endl;
    }
    void Subjects()
    {
        cout<<"Subjects in BCA :"<<endl;
        cout<<"PYTHON"<<endl;
        cout<<"C#"<<endl;
        cout<<"C++"<<endl;
        cout<<"C"<<endl;
        cout<<"JAVA"<<endl;
    }
};
    int main()
{
    info i;
    i.Stud();
    i.Subjects();
    return 0;
}
