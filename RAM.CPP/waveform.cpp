#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int m;
    cout << "Enter the number of columns: ";
    cin >> m;

    int arr[n][m];

    // Input the matrix
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Print in wave form row-wise
    cout << "Wave print:" << endl;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) { // even-indexed row → left to right
            for(int j = 0; j < m; j++) {
                cout << arr[i][j] << " ";
            }
        } else { // odd-indexed row → right to left
            for(int j = m - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl; 
    }

    //cout << endl;
    return 0;
}
