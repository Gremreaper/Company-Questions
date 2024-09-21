#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    int product=x*y;
    if(product%12==0)
    {
        cout<<12<<endl;
    }else {
        cout<<product%12<<endl;
    }
}