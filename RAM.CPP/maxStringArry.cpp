#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[] = {"1230", "3422", "3456", "5684", "4503"};
    int max = stoi(arr[0]);

    for (int i = 1; i < 5; i++) {
        int x = stoi(arr[i]);
        if (x > max) max = x;
    }

    cout << max;
    return 0;
}
