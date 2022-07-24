#include <iostream>
using namespace std;
int main() {
 int days;
 cout<<"Enter the number of days your late:";
 cin>>days;
 if(days<=5){
     cout<<"Your fine 50 paise.";
     }else if(days>5 && days<10){
        cout<<"Your fine is 1 rs"; 
     }else if(days>10 && days<=30){
         cout<<"Your fine is 5rs";
     }else if(days>30){
         cout<<"your membership is cancelled";
     }
    return 0;
}