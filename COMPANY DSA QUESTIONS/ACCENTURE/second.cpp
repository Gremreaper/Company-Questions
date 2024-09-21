/*
Coding Question 2
You are required to implement the following Function def LargeSmallSum(arr).
The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest element 
from the even positions and second smallest from the odd position of given ‘arr’.
Assumption:
• All array elements are unique
• Treat the 0th position a seven
NOTE
• Return 0 if array is empty
• Return 0, if array length is 3 or less than 3
Example:-
Input
arr:3 2 1 7 5 4
Output
7
Explanation
• Second largest among even position elements(1 3 5) is 3
• Second largest among odd position element is 4
• Thus output is 3+4 = 7
Sample Input
arr:1 8 0 2 3 5 6
Sample Output
8
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int length;
   cin>>length;

   int arr[length];
   for(int i=0;i<length;i++)
   {
    cin>>arr[i];
   }

   //if condition

   if(length==0 || length<=3)
   {
    cout<<0<<endl;
   }


   vector<int>arr1;
   vector<int>arr2;

   for(int i=0;i<length;i++)
   {
    if(i%2==0)
    {
        arr1.push_back(arr[i]);
    }else{
      arr2.push_back(arr[i]);
    }
   }

   sort(arr1.begin(),arr1.end());
   sort(arr2.begin(),arr2.end());

   cout<<arr1[arr1.size()-2] + arr2[1]<<endl;
}