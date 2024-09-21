//sum of all even and odd values individually

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

    int odd,even;
    odd=0,even=0;

    for(auto it:arr)
    {
        if(it%2==0)
        {
            even+=it;
        }else{
            odd+=it;
        }
    }

    cout<<"odd:"<<odd<<" "<<"even:"<<even<<endl;
}