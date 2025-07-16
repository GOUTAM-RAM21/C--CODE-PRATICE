#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    // Assuming the input array is sorted
    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }

    // If no pair found
    return ans;
}

int main() {
    vector<int> nums = {1, 3, 4, 5, 7, 10};  // Sorted array
    int target = 12;

    vector<int> result = pairSum(nums, target);

    if (!result.empty()) {
        cout << "Pair found: " << result[0] << " + " << result[1] << " = " << target << endl;
    } else {
        cout << "No valid pair found.\n";
    }

    return 0;
}
