#include <iostream>
#include<cmath>
using namespace std;
int main() {
int n,remainder=0,result=0;
cout<< "Enter your number:";
cin>>n;
int com=n;
    while(n!=0){
        remainder=n%10;
    result=result+pow(remainder,3);
    n/=10;
    };
    cout<<result<<endl;
    if(com==result){
        cout<<"It is a Amstrong Number"; 
    }else{
        cout<<"It is not Amstrong number";
    };
     return 0;
}