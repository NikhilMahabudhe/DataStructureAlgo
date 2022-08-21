#include<iostream>
using namespace std;
 int findmin( int mat[3][3]);
int main(){
int min[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
findmin(min);
    return 0;
}
 int findmin(int mat[3][3]){
    int min =mat[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(min>mat[i][j]){
                min=mat[i][j];
                
            }
        }
    }
    cout<<"Min number in array:"<<min;
    return 0;
}