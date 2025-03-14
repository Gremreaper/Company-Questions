#include<iostream>
#include<math.h>
using namespace std;

int solve(int m,int n)
{
    int sum=0;
    for(int i=m;i<=n;i++){
        sum+=pow(i,3);
    }
    return sum;
}
int main(){
     int m,n;
     cin>>m>>n;

     int ans=solve(m,n);
     cout<<ans<<endl;
}