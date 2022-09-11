#include <iostream>
using namespace std;
void sorting(int[],int);
int searching(int [],int,int);
int main(){
    int *p,s,v,pos;
    cout<<"Enter the  amount of elements:";
    cin>>s;
    p=new int[s];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<(s-1);i++){
        cin>>p[i];
    };
    sorting(p,s);
    cout<<"please enteer value to search: ";
    cin>>v;
   pos = searching(p,s,v);
   if(pos==0){
       cout<<"Element not found";
   }else{
       cout<<"Element found at position"<<" "<<pos;
   };
    return 0;
}

void  sorting(int a[],int s){
    int temp;
    for(int i=0;i<s;i++){
        for(int j=0;j<(s-1);j++){
         if(a[i]<a[j]){
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;
         }
        }
    }
};
int searching(int a[],int s,int v){
    int f=0;
    for(int i=0;i<s;i++){
        if(a[i]==v){
            f++;
            return(i+1);
        }
        
    }
    return (f);
};