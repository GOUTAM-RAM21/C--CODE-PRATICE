// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,count,a;
    cout<<"enter the number";
    cin>>n;
    count=0;
    a=n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) count<<1;
    else cout<<count;
    return 0;
}