#include<iostream>
using namespace std;
int main() {
    int arr[5]={2,3,4,5,6};
    int size=5;
    int target=5;
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout << "Target " << target << " found at index " << i << endl;
        return 0;
    }
}
return -1;
}

//int linearSearch(int arr[], int sz, int target) {
    //for(int i = 0; i < sz; i++) {
        //if(arr[i] == target) {
            //return i; // FOUND
       // }
   // }
   // return -1; // NOT FOUND
//}

//int main() {
   // int arr[] = {4, 2, 7, 8, 1, 2, 5};
   // int sz = 7;
    //int target = 50;

    //cout << linearSearch(arr, sz, target) << endl;
   // return 0;
//}
// TIME COM =O(N)