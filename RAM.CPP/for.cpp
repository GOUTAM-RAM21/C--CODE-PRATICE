#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number";
    cin>>n;
    
    for( int i=100; i<=3*n-103; i=i-3) {
        //if(i%3==0)
         cout<<i<<endl;
    }
    return 0;
}