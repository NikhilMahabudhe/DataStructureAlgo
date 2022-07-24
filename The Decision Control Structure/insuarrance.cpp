#include <iostream>
using namespace std;
int main() {
    int age;
    string city,gender,health;
     cout<<"Enter your age:"<<endl;
    cin>>age;
    cout<<"Enter your health status(excellent or poor):"<<endl;
    cin>>health;
    cout<<"Where your live? ( city or village):"<<endl;
    cin>>city;
    cout<<"what is your gender?"<<endl;
    cin>>gender;
   
        if((health=="excellent") && (age>=25 && age<=35) && (city=="city") && (gender=="male")){
            cout<<"your premium is Rs. 4 per thousand";
        }else if((health=="excellent") && (age>=25 && age<=35) && (city=="city") && (gender=="female")){
         cout<<"your premium is Rs. 3 per thousand";
       }else if((health=="poor") && (age>=25 && age<=35) && (city=="village") && (gender=="male")){
           cout<<"your premium is Rs. 6 per thousand";
      }else{
          cout<<"You cant be assured";
      }
    return 0;
}