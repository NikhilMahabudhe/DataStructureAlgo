#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"please enter the trinagle side1:"<<endl;
    cin>>a;
    cout<<"please enter the trinagle side2:"<<endl;
    cin>>b;
    cout<<"please enter the trinagle side3:"<<endl;
    cin>>c;
   if(a>b && a>c){
       if((c+b)>a){
           cout<<"Traingle is valid";
       }else {
           cout<<"Traingle is not valid";
       }
   }if(b>a && b>c){
       if((c+a)>b){
           cout<<"Traingle is valid";
       }else {
           cout<<"Traingle is not valid";
       }
   }if(c>b && c>a){
       if((a+b)>c){
           cout<<"Traingle is valid";
       }else {
           cout<<"Traingle is not valid";
       }
   }else{
    cout<<"enter valid sides";
   }
   
}