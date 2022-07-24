#include <iostream>
using namespace std;
int main(){
    float a,b,c,sum;
    cout<<"please enter the trinagles:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    sum=a+b+c;
    if(sum==180){
        cout<<"Triangle is possible";
    }else{
        cout<<"Tringle is not possible";
    }
}