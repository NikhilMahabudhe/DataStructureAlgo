#include <iostream>
using namespace std;
int main() {
    int input,mult=1,result=0;
    cout<<"please enter the value:";
    cin>>input;
    for(int i=1;i<=10;i++){
        result=input*mult;
        mult++;
        cout<<result<<endl;
    }
    return 0;
}