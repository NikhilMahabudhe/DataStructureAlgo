#include <iostream>
using namespace std;
int main() {
    int i=1;
     int n,avarage=0,total=0;
   while(i<=10){
       cout<<"Please enter your number:";
       cin>>n;
           total=total+n;
      i++;
   };
   cout<<"Total of enterd integers :"<<total<<endl;
   cout<<"Avarage of enterd integers :"<<(total/10)<<endl;
    return 0;
}