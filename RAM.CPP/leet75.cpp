#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    int n = nums.size();
    int mid = 0;
    int low = 0;
    int high = n - 1;  // Correct initialization

    while (mid <= high) {
        if (nums[mid] == 2) {
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if (nums[mid] == 0) {
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        }
        else mid++;
    }

    return;
}
int main() {
    vector<int> nums = {2, 0, 1, 2, 1, 0, 1, 2};
    
    cout << "Before sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    sort(nums);

    cout << "After sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}


