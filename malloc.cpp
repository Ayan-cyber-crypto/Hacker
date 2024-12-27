
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int*p;
    p=(int*)malloc(5*sizeof(int));//in c++ p=new int[5] is used to store values in heap memory
    p[0]=2;p[1]=3;p[2]=1;p[3]=10;p[4]=9;
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    delete []p;//in c++ we have to use delete syntax after using heap memory as dynamically allocation
    free(p);//for dynamically allocation we have to use free syntax in c
    return 0;
}
