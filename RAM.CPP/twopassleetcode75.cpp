#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Step 1: Count 0s, 1s, and 2s
        int n = nums.size();
        int noz = 0, noo = 0, notw = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) noz++;
            else if (nums[i] == 1) noo++;
            else notw++;
        }

        // Step 2: Fill the array
        for (int i = 0; i < n; i++) {
            if (i < noz) nums[i] = 0;
            else if (i < noz + noo) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution sol;
    sol.sortColors(nums);

    // Print the sorted array
    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
