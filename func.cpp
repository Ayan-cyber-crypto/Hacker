#include<iostream>
using namespace std;
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}
int main(){ 
    int num1=23,num2=45,sum;
    sum=add(num1,num2);
    cout<<sum<<endl;
    return 0;
}