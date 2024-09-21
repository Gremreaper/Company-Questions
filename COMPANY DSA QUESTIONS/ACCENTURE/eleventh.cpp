#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int odd=0;
    int even=0;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2!=0)
        {
            odd+=arr[i];
        }else{
            even^=arr[i];
        }
    }

    cout<<abs(odd-even)<<endl;
}