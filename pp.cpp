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
   int *p1;
   char *p2;
   float *p3;
   double *p4;
   struct rectangle *p5;

   cout<<sizeof(p1)<<endl;//whatever the data type of pointer is  every pointer takes same amount amount of memory
   cout<<sizeof(p2)<<endl;
   cout<<sizeof(p3)<<endl;
   cout<<sizeof(p4)<<endl;
   cout<<sizeof(p5)<<endl;
   
   
}