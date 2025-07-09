#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the arrray size";
    cin>>n;
    int x;
    cout<<"the element of the array";
    cin>>x;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            if(arr[i]+arr[j]==x) {
                cout << arr[i] << " + " << arr[j] << " = " << x << endl;
            }
        }
    }
    return 0;
}