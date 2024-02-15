#include <iostream>
using namespace std;
int main() {
     int n;
    cout<<"Enter n :";
    cin>>n;
    int hf=1;
    for(int i=2 ; i<n ; i++ ){
if (n%i==0) hf=i;
   } cout<<hf<<" ";
}