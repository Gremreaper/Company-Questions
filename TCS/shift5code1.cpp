#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int total_female=0,total_grade=0;
    int n;
    cin>>n;

    while(n--){
        string name,gender;
        char grade;
        int age;

        cin >>name>>age>>grade>>gender;
        if(age>20){
            cout<<name<<endl;
        }

        if(gender=="Female"){
            total_female++;
            total_grade +=grade;
        }
    }

    double avg = (double) (total_grade/total_female);
    cout<<avg<<endl;
}