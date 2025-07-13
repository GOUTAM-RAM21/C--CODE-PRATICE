#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int pre[n];   // left max
        int next[n];  // right max

        // fill pre (left max)
        pre[0] = height[0];
        for (int i = 1; i < n; i++) {
            pre[i] = max(pre[i - 1], height[i]);
        }

        // fill next (right max)
        next[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            next[i] = max(next[i + 1], height[i]);
        }

        // min array -> prev as min
        for (int i = 0; i < n; i++) {
            pre[i] = min(pre[i], next[i]);
        }

        // calculate water
        int water = 0;
        for (int i = 0; i < n; i++) {
            if (height[i] < pre[i]) {
                water += (pre[i] - height[i]);
            }
        }

        return water;
    }
};

int main() {
    Solution sol;
    vector<int> height = {4, 2, 0, 3, 2, 5};
    cout << "Trapped water: " << sol.trap(height) << endl;
    return 0;
}
