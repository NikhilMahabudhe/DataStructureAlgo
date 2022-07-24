#include <iostream>
using namespace std;
int main() {
  int i,remainder,reverse=0;
  cout<<"Enter the number:";
  cin>>i;
while(i!=0){
    remainder=i%10;
    reverse=reverse*10+remainder;
    i/=10;
}
cout<<"reverse number:"<<reverse;
if (reverse==i)
{
    cout<<"reverse number and enterd number are same";
}else{
     cout<<"reverse number and enterd number are not same";
}
    return 0;
};