#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
    vector<int> res(n + m);

    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }

    // Add remaining elements of a
    while (i < n) {
        res[k++] = a[i++];
    }

    // Add remaining elements of b
    while (j < m) {
        res[k++] = b[j++];
    }

    return res;
}

int main() {
    vector<int> arr1 = {1, 4, 5, 5};
    vector<int> arr2 = {2, 3, 6, 7, 10, 12};

    vector<int> result = merge(arr1, arr2);

    // Output merged array
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
