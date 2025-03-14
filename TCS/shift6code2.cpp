#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=0;
    int largest=arr[0];
    int smallest=arr[0];

    for(int i=0;i<n;i++){
        largest = largest > arr[i] ? largest :arr[i];
        smallest = smallest > arr[i] ? arr[i] :smallest;

        res = res > (largest-smallest) ? res : (largest -smallest);
    }
    cout<<res<<endl;
}