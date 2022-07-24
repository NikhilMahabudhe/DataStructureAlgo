#include <iostream>
using namespace std;
int main() {
  int x1,x2,x3,y1,y2,y3,m1,m2;
  cout<<"Enter the value of x1:"<<endl;
  cin>>x1;
   cout<<"Enter the value of x2:"<<endl;
  cin>>x2;
   cout<<"Enter the value of x3:"<<endl;
  cin>>x3;
   cout<<"Enter the value of x4:"<<endl;
  cin>>y1;
   cout<<"Enter the value of x5:"<<endl;
  cin>>y2;
   cout<<"Enter the value of x6:"<<endl;
  cin>>y3;
   m1=x2-x1/y2-y1;
   m2=x3-x2/y3-y2;
   if(m1==m2){
       cout<<"All three points lies on same line"<<endl;
   }else{
       cout<<"points does not lies on same line"<<endl;
   };
return 0;
};