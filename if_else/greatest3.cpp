#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a no a: ";
    cin>>a;
    int b;
    cout<<"Enter a no b: ";
    cin>>b;
    int c;
    cout<<"Enter a no c: ";
    cin>>c;
    if(a>b && a>c){
         cout<<a<<"is greatest";
    }
  else  if(b>a && a>c){
         cout<<b<<"is greatest";
    }
    else {
                 cout<<" gretest";
    }
    return 0;
}