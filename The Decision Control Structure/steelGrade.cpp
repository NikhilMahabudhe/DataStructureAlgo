#include <iostream>
using namespace std;
int main() {
  int hardness,tensile;
  float carbonCont;
  cout<<"Enter the hardness :";
  cin>>hardness;
  cout<<"Enter the canbon content :";
  cin>>carbonCont;
  cout<<"Enter the tensile strength :";
  cin>>tensile;
  if((hardness>50)&&(carbonCont<0.7)&&(tensile>5600)){
      cout<<"steel is of Grade 10";
  }else if((hardness>50)&&(carbonCont<0.7)){
      cout<<"steel is of Grade 9";
  }else if((carbonCont<0.7)&&(tensile>5600)){
      cout<<"steel is of Grade 8";
  }else if((hardness>50)&&(tensile>5600)){
      cout<<"steel is of Grade 7";
  }else if((hardness>50)||(carbonCont<0.7)||(tensile>5600)){
      cout<<"steel is of Grade 6";
  }else{
       cout<<"steel is of Grade 5";
  }
    return 0;
}