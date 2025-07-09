#include <iostream>
#include <vector>
using namespace std;

// Define a display function
void display(const vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    cout << "Original vector: ";
    display(v1);

    vector<int> v2(v1.size());  // Create a vector of same size
    for(int i = 0; i < v1.size(); i++) {
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }

    cout << "Reversed vector: ";
    display(v2);

    return 0;
}
