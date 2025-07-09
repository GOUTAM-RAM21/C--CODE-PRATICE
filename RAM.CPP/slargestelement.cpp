 #include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
        max=arr[i];
        }
    }
   int smax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] != max && arr[i] > smax){
            smax = arr[i];
        }
    }
    cout<<"this is number is "<<max;
    cout << "This is the second maximum number: " << smax << endl;
    return 0;

}