#include <iostream>
using namespace std;
int main() {
int *p,s,value;
cout<<"Enter size of array:";
cin>>s;
p = new  int[s];
cout<<"enter array elements:";
for(int j=0;j<s;j++){
    cin>>p[j];
}
cout<<"value to search:";
cin>>value;
int i;
for(i=0;i<s;i++){
   if(p[i]==value){
       cout<<"element found at pos:"<<i;
       break;
   }
}
if(i==s){
    cout<<"value not found.";
}
    return 0;
}