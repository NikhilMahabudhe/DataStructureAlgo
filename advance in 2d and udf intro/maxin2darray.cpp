#include<iostream>
using namespace std;
 int findmax( int mat[3][3]);
int main(){
int max[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
findmax(max);
    return 0;
}
 int findmax(int mat[3][3]){
    int max =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<mat[i][j]){
                max=mat[i][j];
                
            }
        }
    }
    cout<<"Max number in array:"<<max;
    return 0;
}