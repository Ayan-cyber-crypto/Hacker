//call by value
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle r1)
{
    r1.length=30;//it will only change inside this function
    cout<<"length"<<r1.length<<endl<<"breadth"<<r1.breadth<<endl;
}
int main()
{
    struct rectangle r={10,20};
    fun(r);
    printf("length %d\nbreadth %d\n",r.length,r.breadth);
    return 0;
