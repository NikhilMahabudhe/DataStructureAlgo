#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x,y;
  cout<<"Enter the value of x:"<<endl;
  cin>>x;
  cout<<"Enter the value of y:"<<endl;
  cin>>y;
  if(x==0 && y){
      cout<<"point lies on y-axis"<<endl;
  }if(y==0 && x){
      cout<<"point lies on x-axis"<<endl;
  }if(x==0 && y==0)
 {
     cout<<"point lies on origin"<<endl;
 } 
return 0;
};