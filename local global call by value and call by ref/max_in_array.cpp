#include <iostream>
using namespace std;
 int findmax(int[],int);
int main() {
    int max[10];
    cout<<"Enter the array elements:";
    for(int j=0;j<10;j++ ){
     cin>>max[j];        
    };
     int result=findmax(max,10);
     cout<<"maximum number in array"<<result;
    return 0;
}
int findmax(int a[], int s){
    int maxnum = a[0];
    for(int i=0;i<s;i++){
        if(a[i]>maxnum){
            maxnum = a[i];
        }
    }
    return maxnum;
};