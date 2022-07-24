#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,e,f;
    cout<<"please enter the trinagle side1:"<<endl;
    cin>>a;
    cout<<"please enter the trinagle side2:"<<endl;
    cin>>b;
    cout<<"please enter the trinagle side3:"<<endl;
    cin>>c;
  if((a==b && b!=c)||(b==c && c!=a)||(a==c && a!=b)){
      cout<<" It is isosceles traingle"<<endl;
  } else {
      cout<<"It is not isoscele triangle"<<endl;
  }
  if(a==b && b==c && c==a){
      cout<<"It is equlateral traingle"<<endl;
  }else {
      cout<<"It is not equlateral traingle"<<endl;
  }
  
   e =max(a,b);
    f=max(c,e);
           if(f==a){
       int g =pow(b,2);
       int h =pow(c,2);
       int i =sqrt(g+h);
       if(a==round(i)){
           cout<<"It is a right angle trianle"<<endl;
       }
       if(f==b){
       int g =pow(a,2);
       int h =pow(c,2);
       int i =sqrt(g+h);
       if(b==round(i)){
           cout<<"It is a right angle trianle"<<endl;
       }
       if(f==c){
       int g =pow(b,2);
       int h =pow(a,2);
       int i =sqrt(g+h);
       if(c==round(i)){
           cout<<"It is a right angle trianle"<<endl;
       }else {
            cout<<"It is a not right angle trianle"<<endl;
       }
       }
       }
           }
       return 0;
}     
     