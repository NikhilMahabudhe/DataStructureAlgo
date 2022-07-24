#include <iostream>
using namespace std;
int main() {
  int  shyam,ram,ajay;
  cout<<"enter the shyam age:"<<endl;
  cin>>shyam;
  cout<<"enter the ram age:"<<endl;
  cin>>ram;
  cout<<"enter the ajay age:"<<endl;
  cin>>ajay;
  if(shyam<ram){
      if(shyam<ajay){
          cout<<"shyam is younger"<<endl;
      }else{
          cout<<"ajay is younger"<<endl;
      }
  }else if(ram<ajay){
      cout<<"ram is younger"<<endl;
  }else{
      cout<<"ajay is younger"<<endl;
  }
  return 0;
};