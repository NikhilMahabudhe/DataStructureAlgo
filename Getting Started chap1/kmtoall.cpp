#include <iostream>
using namespace std;
int main() {
    float k;
    cout<<"Enter the disatnce in km:";
    cin>>k;
    cout<<"disatnce in meter:"<<(k*1000)<<endl;
     cout<<"disatnce in feet:"<<(k*3280.84)<<endl;
     cout<<"disatnce in inches:"<<(k*39370.1)<<endl;
     cout<<"disatnce in centimete:"<<(k*100000)<<endl;
    return 0;
}