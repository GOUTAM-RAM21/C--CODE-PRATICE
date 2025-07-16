#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;

    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];

    
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    
    cout << "Wave print:" << endl;
    for(int j=0; j<n; j++){
        for(int i=m-1; i>=0;  i--){
            cout<<arr[i][j]<<" ";

        }
    }
   
    return 0;
}
