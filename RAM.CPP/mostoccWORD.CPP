#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    string temp, line;

    cout << "Enter a line: ";
    getline(cin, line);   // input pura ek line me

    stringstream ss(line);
    while (ss >> temp) {
        v.push_back(temp);   // words ko vector me store karenge
    }

    // Step 1: Sort vector (so that same words ek saath aa jaye)
    sort(v.begin(), v.end());

    int maxCount = 1;
    int count = 1;

    // Step 2: Find max frequency
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    // Step 3: Print word(s) with max frequency
    count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count == maxCount) {
            cout << v[i] << " " << maxCount << endl;
        }
    }

    return 0;
}
