#include <iostream>
using namespace std;
 int findmin(int[],int);
int main() {
    int min[10];
    cout<<"Enter the array elements:";
    for(int j=0;j<10;j++ ){
     cin>>min[j];        
    };
     int result=findmin(min,10);
     cout<<"minimum number in array"<<result;
    return 0;
}
int findmin(int a[], int s){
    int minnum = a[0];
    for(int i=0;i<s;i++){
        if(a[i]<minnum){
            minnum = a[i];
        }
    }
    return minnum;
};