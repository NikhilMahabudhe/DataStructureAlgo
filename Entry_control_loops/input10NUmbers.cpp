#include <iostream>
using namespace std;
int main() {
    int i=1;
     int n,num0=0,nump=0,numn=0;
   while(i<=10){
       cout<<"Please enter your number:";
       cin>>n;
       if(n==0){
           num0++;
       }
       if(n>0){
           numn++;
       }
       if(n<0){
           nump++;
       }
      i++;
   };
   cout<<" NO positive integers :"<<nump<<endl;
   cout<< "No of negative integers:"<<numn<<endl;
   cout<<"No of zeroes:"<<num0<<endl;
    return 0;
}