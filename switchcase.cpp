#include<iostream>
using namespace std;
int main()
{
    int bike;
    cout<<"bike will be\n";
    cin>>bike;
    switch(bike){
        case 1:
        cout<<"triumph"<<endl;
        break;
        case 2:
        cout<<"ducati"<<endl;
        break;
        case 3:
        cout<<"mv augusta"<<endl;
        break;
        case 4:
        cout<<"yamaha"<<endl;
        break;
        default:
        cout<<"no bike then go on foot"<<endl;
    }
    return 0;
}