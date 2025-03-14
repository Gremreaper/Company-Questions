#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&arr,int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==3){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }else if(arr[mid]==6){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    solve(arr,n);

    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}