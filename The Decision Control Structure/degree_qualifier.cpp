#include <iostream>
#include <cmath>
using namespace std;
int main(){

float a,b;
cout<<"Enter percentage in A:";
cin>>a;
cout<<"Enter percentage in B:";
cin>>b;
    if(a>=45 && b>=55 ){
        cout<<"Qualified for degree";
    }else if(b<45 && a>=65){
        cout<<"You can reappera.";
    }else{
        cout<<"You are fail";
    }
       return 0;
}  