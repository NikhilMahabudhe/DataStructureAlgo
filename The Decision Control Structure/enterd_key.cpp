#include <iostream>
using namespace std;
int main() {
    char n;
   cout<<"Enter your character:"<<endl;
   cin>>n;
   if(n>=65 && n<=95)
   {
       cout<<"Enterd character is Capital:"<<n;
   }
   if(n>=97 && n<=122){
      cout<<"Enterd character is small:"<<n; 
   }
   if(n>=48 && n<57){
       cout<<"Enterd character is Number:"<<n;
   }
   if((n>=0 && n<=47) || (n>=58 && n<=64)||(n>=123 && n<=127)){
       cout<<"Enterd character is Special character:"<<n;
   }
    return 0;
}