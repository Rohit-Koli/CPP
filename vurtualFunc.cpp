//virtual function
#include<iostream>
class A
{
	public:
	virtual void show()=0;
	void display()
	{
		cout<<"I am Abstract Class"<<endl;
	}
};
class B: public A
{
	public:
	void show()
	{
		cout<<"I am Derived Class";
	}
};
int main()
{
	B b1;
	b1.display();
	b1.show();
	return 0;
}