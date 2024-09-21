//White space diffrence Accenture 6th sept slot

#include<bits/stdc++.h>
using namespace std;
int countspaces(string &s,int counter)
{
    for(auto it:s)
    {
        if(it==' ')
        {
            counter++;
        }
    }

    return counter;
}
int main()
{

    //getline function to get our spaces within our string ---->take care of this
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    int space1=countspaces(s1,0);
    int space2=countspaces(s2,0);

    space1=abs(space1-space2);

    if(space1%2==0)
    {
        cout<<"Even"<<space1<<endl;
    }else{
        cout<<"Odd"<<space1<<endl;
    }
}