#include <iostream>
#include<cmath>
using namespace std;
int main() {
int i,p,sum=0;
for(i=1;i<=100;i++){
    p=1;
while(p<=(i/2)){
 if(i % p == 0)
 sum=sum+p;
 p++;
     }
 if(sum==i)
cout<<i<<" ";
sum=0;
  }
  return 0;
}