#include <iostream>
#include <vector>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
vector<ll> dp(1000005, -1);


ll f(int n) {
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];
    
    ll sum = 0;
    for (int i = 1; i <= 6; i++) {
        if (n - i < 0) break;
        sum = (sum + f(n - i)) % MOD;
    }
    return dp[n] = sum;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << "\n";
    return 0;
}
