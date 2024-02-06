#include <iostream>
using namespace std;
int main() {
   float p; //p=principle amount
   cout<<"Enter a principle amount: ";
   cin>>p;
    float R; //R=intrest rate
   cout<<"Enter a Rate: ";
   cin>>R;
   float T; //T= time
   cout<<"Enter a time period: ";
   cin>>T;
   
   float S = (p*R*T)/100;
   cout<<"simple intrest is : "<<S;
   
}