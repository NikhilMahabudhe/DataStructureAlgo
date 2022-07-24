#include <iostream>
using namespace std;
int main(){
    int si,p,r,t,k;
    cout<<"Enter intial principal balance"<<endl;
    cin>>p;
    cout<<"Enter intrest rate in percentage:"<<endl;
    cin>>r;
    cout<<"Enter  time A:"<<endl;
    cin>>t;
    k=p*r*t;
    si=k/100;
    cout<<"Your simple intrest is :"<<si;
    return 0;
}//day1