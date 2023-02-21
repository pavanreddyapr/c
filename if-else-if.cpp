#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"age will be :\n";
    cin>>age;
    if(age<12){
        cout<<"welcome to the league kid"<<endl;
    }
    else if (age<18)
    {
        cout<<"you are a teenager"<<endl;
    }
    else{
        cout<<"pov you are above 18"<<endl;
    }
    return 0;
    
}