#include<iostream>
#include<vector>  // Include this to use std::vector
using namespace std;

class Solution {
public:
    vector<vector<int>> PrintTheAllSubArraysPossible(vector<int> arr) {
        int n = arr.size();
        vector<vector<int>> result;  // Store subarrays as vectors of vectors
        
        // Iterate over all subarrays
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                vector<int> subArray;
                for (int k = i; k <= j; k++) {
                    subArray.push_back(arr[k]);  // Collect subarray elements
                }
                result.push_back(subArray);  // Add the subarray to result
            }
        }
        return result;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4};
    Solution s;
    // Get all subarrays
    vector<vector<int>> result = s.PrintTheAllSubArraysPossible(arr);

    // Print the subarrays
    for (const auto& subArray : result) {
        for (int element : subArray) {
            cout << element << " ";
        }
        cout << endl;  // Print a new line after each subarray
    }

    return 0;
}
