#include<iostream>
using namespace std;
int  main() {
    int n;
    
    
    cout<<"enter the array size";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for( int i=0; i<n; i++){

        sum=sum+arr[i];
    }
    cout<<"the sum total is "<<sum;
    return 0;
}