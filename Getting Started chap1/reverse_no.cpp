#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n,remainder,add=0;
cout<<"Enter your number:"<<endl;
cin>>n;
while(n!=0){
    remainder=n%10;
    add=add*10+remainder;
    n/=10;
}
cout<<add;
return 0;
};