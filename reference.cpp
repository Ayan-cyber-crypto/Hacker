#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
//reference does not consume memory
    int b=30;
    r=b;
    cout<<a<<endl<<r<<endl;
    return 0;
}