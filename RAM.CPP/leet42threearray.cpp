#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int pre[n];
        pre[0] = -1;
        int max1 = height[0];

        // Fill pre array (left max)
        for (int i = 1; i < n; i++) {
            pre[i] = max1;
            if (max1 < height[i])
                max1 = height[i];
        }

        int next[n];
        next[n - 1] = -1;
        int max2 = height[n - 1];

        // Fill next array (right max)
        for (int i = n - 2; i >= 0; i--) {
            next[i] = max2;
            if (max2 < height[i])
                max2 = height[i];
        }

        int water = 0;

        // Calculate trapped water
        for (int i = 1; i < n - 1; i++) {
            int minHeight = min(pre[i], next[i]);
            if (height[i] < minHeight) {
                water += (minHeight - height[i]);
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
