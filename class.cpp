#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle 
{
    public:
    int length;
    int breadth;

void initialize(int l,int b)
{
    length=l;
    breadth=b;
}
int area()
  {
    return length*breadth;
  } 
  int perimeter()
  {
    int p;
    p=2*(length+breadth);
    return p;
  }
};
int main()
{
    rectangle r;
    int l,b;
    printf("enter length and breadth");
    cin>>l>>b;
    r.initialize(l,b);
    int a=r.area();
    int peri=r.perimeter();
    printf("%d\n%d\n",a,peri);
    return 0;

}