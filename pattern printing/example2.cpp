#include <iostream>
using namespace std;
#include <iomanip>
int main() {
    int i,j,k=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
        cout<<(k%2);
        k++;
        }
        cout<<endl;
    }
    return 0;
}