#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n=12345,remainder,add=0;
cout<<"Enter your number:"<<endl;
cin>>n;
while(n!=0){
    remainder=n%10;
    add=add+remainder;
    n/=10;
}
cout<<add;
return 0;
};