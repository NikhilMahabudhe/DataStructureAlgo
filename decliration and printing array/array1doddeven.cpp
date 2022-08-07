#include <iostream>
using namespace std;
int main() {
  int a[5],odd=0,even=0,zeros=0,negative=0,positive=0;
  for(int i=0;i<5;i++){
      cout<<"Enter the number:";
      cin>>a[i];
      if(a[i]%2==0){
          even++;
      }
      if(a[i]%2!=0){
          odd++;
      }
      if(a[i]==0){
          zeros++;
      }
      if(0>a[i]){
          negative++;
      }
      if(0<a[i]){
          positive++;
      }
  }
  cout<<"Number of odds in array:"<<odd<<endl;
  cout<<"Number of even in array:"<<even<<endl;
  cout<<"Number of zeroes in array:"<<zeros<<endl;
  cout<<"Number of positive in array:"<<positive<<endl;
  cout<<"Number of negative in array:"<<negative<<endl;
    return 0;
}