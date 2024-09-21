//dividend =divisor *quotient +remainder

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int d,q,r;
    cin>>d>>q>>r;

    d=d*q+r;

    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            index=i;
        }
    }

    cout<<index<<endl;
}