#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[5];
    int b[10]={2,4,56,23,12,5,7};
    int i;
    for(i=0;i<10;i++)//array value accesing using c
    {
        cout<<b[i]<<endl;
    }
    for(int x:b)//array value accesing using c++
    {
        cout<<x<<endl;
    }
    a[0]=12;
    a[1]=34;
    a[2]=21;
    cout<<sizeof(a)<<endl;
    cout<<a[1]<<endl;
    printf("%d\n",a[3]);
    int n;
    cout<<"enter the size";
    cin>>n;
    int c[n];//we can not initialize an array while taking the size from the user,you can initialize by using index
    c[0]=10;
    for(int y:c)
    {
        cout<<y<<endl;
    }


    return 0;
}