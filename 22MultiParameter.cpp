//multiple parameters
#include <iostream>
using namespace std;

void myFunction(string fname,int age)
{
    cout << fname << "Refsnes "<<age <<" Years old .\n";

}
int main()
{
    myFunction("Liam ",3 );    
    myFunction("Jenny ",14 );    
    myFunction("Lucifer ",30 );    
    return 0;
}