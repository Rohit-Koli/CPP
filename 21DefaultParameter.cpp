//Default parameter value
#include <iostream>
using namespace std;

void myFunction(string country="India")
{
    cout << country <<"\n";
}
int main()
{
    myFunction("swedan");
    myFunction("USA");
    myFunction();
    myFunction("Russia");
       
    return 0;
}