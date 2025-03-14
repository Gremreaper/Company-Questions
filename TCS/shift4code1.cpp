#include<iostream>
#include<vector>
using namespace std;
int fib(int n,vector<int>&dp){
    if(n==0 || n==1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}
int main(){
    int n;
    cin>>n;

    vector<int>dp(n+1,-1);

    for(int i=0;i<=n;i++){
        int res = fib(i,dp);
        cout<<res<<" ";
    }
    cout<<endl;
}


/*

Optimized


#include<iostream>
using namespace std;

void printFibonacci(int n) {
    if (n >= 0) cout << 0 << " ";
    if (n >= 1) cout << 1 << " ";

    int prev2 = 0, prev1 = 1;

    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        cout << curr << " ";
        prev2 = prev1;
        prev1 = curr;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    printFibonacci(n);

    return 0;
}
*/