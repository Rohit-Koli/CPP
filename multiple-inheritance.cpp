// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int A_value;
//     void A_input();
//     {
//         cout<<"Enter value";
//         cin >>A_input()
//     }
// };

// class B
// {
//     public:
//     int B_value;
//     void B_input()
//     {
//         cout<<"Enter value";
//         cin >>B_input()
//     }
// };

// class c
// {
// public:
//     void difrence()
//     {
//         cout<<"difrence between two values"<<A_value-B_value<<endl;
//     }
// };

// int main()
// {
//     C c1;
//     c1.A_input();
//     c1.B_input();
//     c1.difrence();
//     return 0;
// }
#include <iostream>
using namespace std;
class Base_class_1
{
public:
void show_1()
{
cout<<" This is show function of first base class"<<endl;
}
};
class Base_class_2
{
public:
void show_2()
{
cout<<" This is show function of second base class"<<endl;
}
};
class derived_class: public Base_class_1,public Base_class_2
{
public:
void show_3()
{
cout<<" This is show function of the derived class"<< endl;
}
};
int main()
{
derived_class d;
d.show_1();
d.show_2();
d.show_3();
}