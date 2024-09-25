#include <iostream>
using namespace std;
void display(int arr[],int n,int idex) {
    if(idex==n) return ;
    cout<<arr[idex]<<" ";
    display(arr,n,idex+1);
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    display(arr,n,0);
    return 0;
    
}