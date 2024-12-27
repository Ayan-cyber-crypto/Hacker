#include<iostream>
using namespace std;
int add(int a,int b)
{

  
  a++;
  printf(" no is %d\n",a);//call by value should be used only for some do computation ,operation ,get the result and return the result
  return 0;
}
int main(){ 
    int num1=23,num2=45,sum;
    printf(" now it is %d\n",num1);
    sum=add(num1,num2);

    return 0;
}