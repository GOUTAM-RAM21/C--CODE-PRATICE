#include<iostream>
#include<vector>
using namespace std;

// Function to display the elements of a vector
void display(const vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to reverse the part of the vector from index i to j
void reversePart(int i, int j, vector<int>& v) {
    while (i <= j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    int k=2;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

    return 0;
}
