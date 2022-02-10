#include<iostream>
using namespace std;
class MyClass {       
  public:             
    int myRollNum;        
    string myName;  
};

int main() {
  MyClass myObj; 


  myObj.myRollNum = 37; 
  myObj.myName= "Rohit";

  cout << myObj.myRollNum << "\n";
  cout << myObj.myName;
  return 0;
}