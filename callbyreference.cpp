#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main()
{
    int x=35;
    int y=50;
    swap(x,y);
    printf("%d\n%d\n",x,y);
    cout<<x<<endl<<y;
    return 0;
}