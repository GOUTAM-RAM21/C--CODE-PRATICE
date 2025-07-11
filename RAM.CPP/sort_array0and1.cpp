#include<iostream>
#include<vector>

using namespace std;

void customSort(int i, int j, vector<int>& v) {
    while(i < j) {
        if(v[j] == 1) j--;
        if(v[i] == 0) i++;
        if(i > j) break;

        if(v[i] == 1 && v[j] == 0) {
            
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v = {0, 1, 0, 0, 1};

    cout << "Before sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    customSort(0, v.size() - 1, v);  // Pass start and end index with vector

    cout << "After sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
