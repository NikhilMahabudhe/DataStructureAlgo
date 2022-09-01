#include<iostream>
using namespace std;
void sumrev(int,int*,int*);
int main(){
    
    int number,sum,rev;
    cout<<"Enter your Number:";
    cin>>number;
    sumrev(number,&sum,&rev);
    cout<<"reverse of number:"<<rev<<endl;
    cout<<"sum of number:"<<sum;
    
    return 0;
    
}
void sumrev(int a,int*s,int*r){
    *s=0;
    *r=0;
    while(a!=0){
        
        int remainder;
    remainder = a%10;
   *s=*s+remainder;
   *r =(*r*10)+remainder;
    
    a/=10;
    }
    
};