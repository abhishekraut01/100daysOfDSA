#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        // Step 1: Collect all non-zero elements into temp array
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Step 2: Put non-zero elements back in the original nums array
        int nz = temp.size();
        for (int i = 0; i < nz; i++) {
            nums[i] = temp[i];
        }

        // Step 3: Fill the remaining part of nums with zeros
        for (int i = nz; i < n; i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution s;
    s.moveZeroes(nums);

    // Output the result
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
