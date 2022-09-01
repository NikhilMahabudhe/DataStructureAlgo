
#include <iostream>
using namespace std;
void calculate(int,int*,int*);
int main() {
   int side ,area,peri;
   cout<<"Enter side of square :";
   cin>>side;
    calculate(side,&area,&peri);
   cout<<"Area of square:"<<area<<endl;
   cout<<"Perimeter of square:"<<peri;
    return 0;
}
void calculate(int side, int*a ,int*p ){
    *a=side*side;
    *p=side+side+side+side;
};