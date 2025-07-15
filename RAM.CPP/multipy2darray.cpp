#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of row ";
    cin >> n;

    int m;
    cout << "enter the number of column ";
    cin >> m;

    int p;
    cout << "enter the row ";
    cin >> p;

    int q;
    cout << "enter the column ";
    cin >> q;

    if(m == p) {  
        int a[n][m];
        cout << "enter the 1 matrix ";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int b[p][q];
        cout << "enter the 2 matrix ";
        for(int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {
                cin >> b[i][j];
            }
        }

        int res[n][q];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < q; j++) {
                res[i][j] = 0;
                for(int k = 0; k < m; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix multiplication not possible (columns of first != rows of second)";
    }

    return 0;
}
