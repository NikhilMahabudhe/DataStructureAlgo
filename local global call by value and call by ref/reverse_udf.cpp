#include <iostream>
using namespace std;
 int revnum(int);
int main() {
    int n;
  cout<<"Enter your number:";
  cin>>n;
  int b =revnum(n);
  cout<<"reverse number is :"<<b;
    return 0;
}
int revnum(int a){
     int rem=0,rev=0;
  while(a>0){
      rem=a%10;
      rev=rev*10+rem;
      a= a/10;
  }
  return rev;
};