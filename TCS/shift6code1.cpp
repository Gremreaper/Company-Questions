#include<iostream>
#include<string>
using namespace std;
bool ispossible(int x){
    return x%9 ==0;
}
int main(){
    string s;
    cin>>s;

    int res=0;
    for(int i=0;i<s.length();i++){
        int num=s[i]-'0';
        res = res *10 + num;
    }
  
    if(res>=100 && res<=999){
        if(ispossible(res)){
            cout<<"The Number" <<res<< "is divisible by 9"<<endl;
        }else{
            cout<<"The Number" <<res<< "is not divisible by 9"<<endl;
        }
    }
    cout<<endl;
}