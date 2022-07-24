#include <iostream>
using namespace std;
int main() {
  int input,fact=1;
 cout<<"Enter your number:";
 cin>>input;
 for(input;input>0;input--)
 {
     fact=fact*input;
 }
 cout<<"factorial on enterd value is:"<<fact<<endl;
 
    return 0;
}