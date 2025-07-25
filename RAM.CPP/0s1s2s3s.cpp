#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    int n = nums.size();
    int noz = 0;
    int noo = 0;
    int notw = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) noz++;
        else if (nums[i] == 1) noo++;
        else notw++;
    }

    for (int i = 0; i < n; i++) {
        if (i < noz) nums[i] = 0;
        else if (i < (noz + noo)) nums[i] = 1;
        else nums[i] = 2;
    }
    return;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sort(nums);

    cout << "After sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
