#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    num1=num3;
    int *p;
    int *P=&num2;
    num1= *p;
    num2=num3;
    cout<<"Before swapping :"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<"After swapping :"<<endl;
    cout<<num1<<endl;
    cout<<num2;
    return 0;
    
};