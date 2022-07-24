#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float whours;
 cout<<"Enter your working hours:";
 cin>>whours;
 if(whours>=2 && whours<=3){
     cout<<"worker is highly efficient.";
 }else if(whours>=3 && whours<=4){
 cout<<"you nedd to improov the speed";
 }else if(whours>=4 && whours<=5){
     cout<<"You have to go through tranning";
 }else if(whours>5){
     cout<<"You have to leave the companay sorry.";
 }
       return 0;
}    