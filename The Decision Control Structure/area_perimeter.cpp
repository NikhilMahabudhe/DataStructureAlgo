#include <iostream>
using namespace std;
int main() {
    int a,p;
    int length=5;
    int breadth=4;
     a=length*breadth;
     p=2*length+2*breadth;
     if(a>p){
         cout<<"Area is greater than perimeter"<<endl;
     }else if(a<p){
         cout<<"perimeter is greater than area"<<endl;
     };
return 0;
};