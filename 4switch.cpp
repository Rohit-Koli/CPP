#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number to check grades :"<<endl;
    cin>>num;
    switch(num)
    {
        case 1:cout<<"It is 10";break;
        case 2:cout<<"It is 20";break;
        case 3:cout<<"It is 30";break;
        case 4:cout<<"It is 40";break;
        case 5:cout<<"It is 50";break;
        case 7:cout<<"It is 60";break;
        case 8:cout<<"It is 70";break;
        case 9:cout<<"It is 80";break;
        default:cout<<"It is 100";break;
    }
    return 0;
}