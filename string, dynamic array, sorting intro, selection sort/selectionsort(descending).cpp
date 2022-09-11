#include <iostream>
using namespace std;
void selectionsort(int[],int);
int main() {
int i,*p,s;
cout<<"Enter the array size:";
cin>>s;
p=new int[s];
cout<<"Entere the element:";
for(i=0;i<s;i++){
    cin>>p[i];
}
selectionsort(p,s);
cout<<"sorted array:"<<endl;
for(i=0;i<s;i++){
    cout<<p[i]<<" ";
}
    return 0;
}
void selectionsort(int a[],int s){
    int temp;
    for(int i=0;i<s;i++){
        for(int j=0;j<s+1;j++){
            if(a[i]<a[j]){ 
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}