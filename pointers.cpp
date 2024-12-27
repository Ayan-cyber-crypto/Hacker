#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int*p;
    p=&a;
    cout<<a<<endl;
    printf("%d\n",*p);
    printf("%d %d\n",p,&a);
    int b[5]={3,4,2,5,6};
    int *q;
    q=b;
   // q=&b[0];this is used to acces particular value
    for(int i=0;i<5;i++)
    {
       cout<<q[i]<<endl;
       cout<<b[i]<<endl;


    }
    return 0;
}
