#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reverse(int i, int j, vector<int>& v) {
    while (i <= j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5,3,6};
    int n = v.size();
    int k = 20;
    if(k>n) k=k%n;

    cout << "Original array: ";
    display(v);
                              // 123 45
    reverse(0, n - k-1, v); // 32145
    reverse( n-k,n-1, v); // 321 54
    reverse(0, n - 1, v);// 4 5 1 2 3

    cout << "After rotating last " << k << " elements to front: ";
    display(v);

    return 0;
}
