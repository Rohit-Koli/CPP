#include <iostream>
using namespace std;

class myclass
{
public://access specifier
int myNumber;//atribute
string myString;//atribute    
};
int main()
{
    myclass myobj; //created an object in class
    myobj.myNumber=37;
    myobj.myString="rohit";
    cout << myobj.myNumber<<"\n";
    cout << myobj.myString<<"\n";
    return 0;
}