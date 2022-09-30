#include <iostream>
using namespace std;
int main() {
int *p,s,value;
cout<<"Enter size of array:";
cin>>s;
p = new  int[s];
cout<<"Enter array elements:";
for(int j=0;j<s;j++){
    cin>>p[j];
}
int temp=0;
for(int l=0;l<s;l++){
    for(int g=1;g<s;g++){
        if(p[l]>p[g]){
           p[l]=temp;
           p[l]=p[g];
           p[g]=temp;
        }
        
    }
}
for(int k=0;k<s;k++){
    cout<<p[k];
}


cout<<"value to search:";
cin>>value;
int i,l=0,r=s-1,m,count;
while(r>=l){
    m=(l+r)/2;
    if(p[m]<value){
        l=m+1;
    }
    if(p[m]>value){
        r=m-1;
    }
    if(p[m]==value){
        cout<<"element found at pos:"<<count;
         cout<<"this";
    }
   
    count++;
}

    return 0;
}