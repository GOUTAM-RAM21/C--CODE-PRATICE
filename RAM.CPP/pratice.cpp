#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
     int product=1;
        for(int i=0; i<n; i++){
            product=product*arr[i];
        }
        cout<<"the number is " <<product;
        return 0;
        
    }



