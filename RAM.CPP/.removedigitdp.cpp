#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to extract all non-zero digits of n
vector<int> get_digits(int n) {
    vector<int> result;
    while (n > 0) {
        if (n % 10 != 0) {
            result.push_back(n % 10);
        }
        n /= 10;
    }
    return result;
}

// Memoization array (size up to 1e6 as per CSES constraint)
vector<int> dp(1e6 + 1, -1);

// Recursive function with memoization
int f(int n) {
    if (n == 0) return 0; // Base case: no steps needed
    if (dp[n] != -1) return dp[n]; // Return if already calculated

    int result = INT_MAX;
    vector<int> digits = get_digits(n);

    for (int d : digits) {
        result = min(result, 1 + f(n - d)); // Try all digits
    }

    return dp[n] = result; // Store result and return
}

int main() {
    int n;
    cin >> n;

    cout << f(n) << endl; // Output the answer

    return 0;
}
