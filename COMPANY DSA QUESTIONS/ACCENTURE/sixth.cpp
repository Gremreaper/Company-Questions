/*
Anagrams of each other or not;
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    bool check=s1==s2;

    cout<<check<<endl;
}