#include<iostream>
#include<vector>
using namespace std;

// Move all negative numbers to the end, and positive (including 0) to the front
void customSort(int i, int j, vector<int>& v) {
    while(i < j) {
        // Move i forward if v[i] is non-negative (0 or positive)
        while(i < j && v[i] >= 0) i++;

        // Move j backward if v[j] is negative
        while(i < j && v[j] < 0) j--;

        // Swap if needed
        if(i < j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v = {2, -1, -2, 1, 3, 1};

    cout << "Before sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    customSort(0, v.size() - 1, v);  // Move negatives to end

    cout << "After sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
