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
    rectangle r={10,4};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    rectangle *p=&r;//pointer to structure 
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
    
}