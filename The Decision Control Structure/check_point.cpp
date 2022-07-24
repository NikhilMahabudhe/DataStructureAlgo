
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int radius,x,y,a,cp;
    cout<<"Enter the co-ordinate"<<endl;
    cout<<"x:"<<endl;
    cin>>x;
    cout<<"y:"<<endl;
    cin>>y;
    cout<<"radius:"<<endl;
    cin>>radius;
    a= pow(x,2)+pow(y,2);
    cp= sqrt(a);
    if(cp<radius){
        cout<<"point is inside the circle"<<endl;
    }if(cp>radius){
        cout<<"point is outside the circle"<<endl;
    }if(cp==radius){
        
        cout<<"point in on the circle"<<endl;
    }
return 0;
};