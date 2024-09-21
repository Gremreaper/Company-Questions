/*
Coding Question 4
A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right-to left one digit at a time
You are required to implement the following function, Int NumberOfCarries(int num1 , int num2);
The functions accepts two numbers ‘num1’ and ‘num2’ as its arguments. You are required to calculate and 
return the total number of carries generated while adding digits of two numbers ‘num1’ and ‘ num2’.
Assumption: num1, num2>=0
Example:
• Input
◦ Num 1: 451
◦ Num 2: 349
• Output
◦ 2
Explanation:
Adding ‘num 1’ and ‘num 2’ right-to-left results in 2 carries since ( 1+9) is 10. 1 is carried and (5+4=1) is 10, 
again 1 is carried. Hence 2 is returned.
Sample Input
Num 1: 23
Num 2: 563
Sample Output
0
*/

#include<bits/stdc++.h>
using namespace std;
int solve(string &s1,string &s2,int count)
{
    int n=s1.length();
    int m=s2.length();
    int carry=0;

    while(n!=0 || m!=0)
    {
        int x=0;
        if(n>0)
        {
          x=(s1[n-1]-'0');
          n--;
        }

        int y=0;
        if(m>0)
        {
            y=(s2[m-1]-'0');
            m--;
        }

        int sum=x+y+carry;
        if(sum>=10)
        {
            count++;
            carry=1;
        }else{
            carry=0;
        }
    }

    return count;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;

    string s1=to_string(num1);
    string s2=to_string(num2);

     cout<<solve(s1,s2,0)<<endl;
}