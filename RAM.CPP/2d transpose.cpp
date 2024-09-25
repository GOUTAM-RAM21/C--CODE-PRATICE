#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];  // Fixed size array based on input dimensions

    // Input elements of the array
    cout << "Enter elements of the array:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "The matrix is:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose the array
    cout << "The transpose of the matrix is:\n";
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
