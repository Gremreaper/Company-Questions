/*
special series fn=f(n-1)*2 +f(n-2)*2
*/

#include<iostream>
using namespace std;
int solve(int n)
{
    if(n==0 || n==1)
     {
        return 1;
     }

     int f0=1,f1=1,fn=0;
     for(int i=2;i<=n;i++)
     {
        fn=(f0*f0 + f1*f1)%47;
        f0=f1;
        f1=fn;
     }

     return f1;
}
int main()
{
    int n;
    cin>>n;

    cout<<solve(n)<<endl;
}