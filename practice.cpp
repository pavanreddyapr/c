#include<iostream>
using namespace std;
int main()
{

    int a;
    cout<<"a:";
    cin>>a;

    int b;
    cout<<"b:";
    cin>>b;
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}