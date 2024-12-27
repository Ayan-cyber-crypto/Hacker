//monolithic programming
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int length=0,breadth=0;
    printf("Enter the length and breadth");
    cin>>length>>breadth;
    int area=length*breadth;
    int peri=2*(length*breadth);
    printf("area %d\nperimeter %d\n",area,peri);
    return 0;
}