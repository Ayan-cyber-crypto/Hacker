#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    char x;//padding-this structure will create 12 bytes ,but it will use only 9 bytes

};//you can declare variable here also before semicolon,it will called as global variable
//struct rectangle s ,you can declare here also
int main()
{
    struct rectangle s;//you can initialize here also
    s.length=10;
    s.breadth=20;
    printf("area of a rectangle is %d\n",s.length*s.breadth);
    printf("%lu\n",sizeof(s));
}