//array are always passed by only address//cannot be passed by value
//array can change the actual parameter using function
//array as a parameter
#include<iostream>
using namespace std;
void fun (int a[],int n)//instead of using a[] we can use *a as a pointer
{
    a[0]=90;
//     for(int i=0;i<5;i++)//for each loop will not work here to access the pointer of this function
//     {
//         cout<<a[i]<<endl;
//     }
//     cout<<sizeof(a)/sizeof(int)<<endl;//it is actually giving the size of the pointer
 }



int main()
{
    int a[]={2,4,6,7,5};
    int n=5;
    fun(a,n);
    cout<<sizeof(a)/sizeof(int)<<endl;
    for(int x:a)
    {
        cout<<x<<endl;
    }
    
}
