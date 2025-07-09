#include <iostream>
#include <vector>
#define mod 1000000007
#define ll long long int
using namespace std;

vector<ll> dp(1000005, -1);

// Top-down (recursive + memoization)
ll f(int n) {
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];

    ll sum = 0;
    for (int i = 1; i <= 6; i++) {
        if (n - i < 0) break;
        sum = (sum % mod + f(n - i) % mod) % mod;
    }
    return dp[n] = sum % mod;
}

// Bottom-up (iterative DP)
ll fbu(int n) {
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;

    for (int k = 1; k <= n; k++) {
        ll sum = 0;
        for (int i = 1; i <= 6; i++) {
            if (k - i < 0) break;
            sum = (sum % mod + dp[k - i] % mod) % mod;
        }
        dp[k] = sum % mod;
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;

    // Top-down approach
    cout << "Top-down: " << f(n) << "\n";

    // Bottom-up approach
    cout << "Bottom-up: " << fbu(n) << "\n";

    return 0;
}
