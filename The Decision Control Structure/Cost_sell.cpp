#include <iostream>
using namespace std;
int main() {
   int sell,cost,profit,loss;
   cout<<"Enter the selling price"<<endl;
   cin>>sell;
   cout<<"Enter the cost price "<<endl;
   cin>>cost;
   if(sell>cost){
       profit=sell-cost;
       cout<<"seller has made a profit of:"<<profit;
   }else  if(sell<cost){
       loss=cost-sell;
       cout<<"seller has made a loss of:"<<loss;
   };
    return 0;
}