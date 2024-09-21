/*
CHOCOLATE DISTRIBUTION PROBLEM SLIDING WINDOW METHOD
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    //check the case of non fulfil

    if(m>n)
    {
        cout<<-1<<endl;
    }

    sort(arr,arr+n);

    //sliding window method
    int mindiff=INT_MAX;
    for(int i=0;i+m-1<n;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        if(diff<mindiff)
        {
            mindiff=diff;
        }
    }

    cout<<mindiff<<endl;
}
