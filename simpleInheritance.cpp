// #include<iostream>
// using namespace std;
// //base class -->thats class that who give birth to another class/derived class
// class Employee{
//     int id;
//     float salary;
//     Employee(int InpId){
//         id = InpId;
//         salary =34.0;
//     }
//     Employee(){}
// };

//Derived class syntax
/*
class {{Derived-class -Name}}::
{{Visibility-Mode}} means how you want to desplay code public / private
::{{Base-class-Name}}
{
    class members/methods /etc

    *******************************************
    1>Default visibility mode is private
    2>Public Visibility mode:Public members of the derived class becomes public members of the derived class
    3>Private Visibility mode:private members of the derived class becomes private members of the derived class
    4>private members are never inherityed
}
*/
//creating a programer clas{s from derived from employee base class
#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   float salary = 60000;   
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;    
   };       
int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  