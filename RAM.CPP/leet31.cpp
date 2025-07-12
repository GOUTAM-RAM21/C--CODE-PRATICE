#include <iostream>
#include <vector>
#include <algorithm>  // for reverse

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // Step 1: Find the first decreasing element from the back
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // If no such element, reverse the array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Reverse the suffix
        reverse(nums.begin() + idx + 1, nums.end());

        // Step 3: Find the element just greater than nums[idx] in the suffix
        int j = -1;
        for (int i = idx + 1; i < n; i++) {
            if (nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }

        // Step 4: Swap
        swap(nums[idx], nums[j]);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    sol.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
