#include <iostream>
using namespace std;
 void checkprime(int*);
int main() {
 int num;
 cout<<"Enter the number:";
 cin>>num;
 checkprime(&num);
    return 0;
}
void checkprime(int*a){
    int b=0;
    for(int i=1;i<=*a;i++){
        if(*a%i==0){
            b++;
        }
    };
    if(b==2){
        cout<<"This is prime number.";
    }else{
        cout<<"This is not prime";
    }
};