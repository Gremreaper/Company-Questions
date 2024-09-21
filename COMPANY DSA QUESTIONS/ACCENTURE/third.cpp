/*
Coding Question 3
Implement the following Function
The function def ProductSmallestPair(sum, arr) accepts an integers sum and an integer array arr of size n. Implement the 
function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] 
<= sum) and return the product of element of this pair
NOTE
• Return -1 if array is empty or if n<2
• Return 0, if no such pairs found
• All computed values lie within integer range
Example
Input
sum:9
Arr:5 2 4 3 9 7 1
Output
2
Explanation
Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2
Sample Input
sum:4
Arr:9 8 3 -7 3 9
Sample Output
-21
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,n;
    cin>>sum>>n;

    if(n<2)
    {
        cout<<-1<<endl;
    }

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int checksum=arr[0]+arr[1];

    if(checksum<=sum)
    {
        cout<<(arr[0]*arr[1])<<endl;
    }else{
        cout<<0<<endl;
    }
}