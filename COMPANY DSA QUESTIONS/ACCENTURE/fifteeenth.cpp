#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        ans.push_back(x);
    }

    reverse(ans.begin(),ans.end());
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            counter+=ans[i];
        }
    }

    cout<<counter<<endl;
}