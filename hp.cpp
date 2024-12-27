#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;

};
int main()
{
   struct rectangle *p;
   p=(struct rectangle*)malloc(sizeof(struct rectangle));//in c
   //p=new rectangle; in c++ for dynamic memory allocation
   
   p->length=10;
   p->breadth=3;

   cout<<p->length<<endl;
   cout<<p->breadth<<endl;
   return 0;


}