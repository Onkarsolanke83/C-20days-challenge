//determine whether the seller made profit or loss and how much ??
#include <iostream>
using namespace std;
int main() {
    int cp;
    cout<<"Enter cp: ";
    cin>>cp;
     int sp;
    cout<<"Enter sp: ";
    cin>>sp;
    if(sp>cp)
    cout<<"profit :"<<sp-cp;
if(sp<cp)
    cout<<"loss :"<<cp-sp;
if(sp==cp) 
     cout<<"no profit no loss";

return 0;
}
