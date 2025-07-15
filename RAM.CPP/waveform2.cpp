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

    
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    
    cout << "Wave print:" << endl;
    for(int i = m-1; i>=0; i--) {
        if(i % 2 == 0) { 
            for(int j = 0; j < m; j++) {
                cout << arr[i][j] << " ";
            }
        } else { 
            for(int j = m - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl; 
    }

   
    return 0;
}
