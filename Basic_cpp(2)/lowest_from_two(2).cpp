#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the First number:"<<endl;
    cin>>a;
    cout<<"Enter the Second number:"<<endl;
    cin>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }if(a<b){
         cout<<b<<" is greater than "<<a<<endl;
    }else{
        cout<<"Numbers are equal"<<endl;
    }
    return 0;
}//day2