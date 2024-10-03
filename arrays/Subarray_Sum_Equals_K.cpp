#include<iostream>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& A, int K) {
        // Map to store prefix sum and its frequency
        map<int, int> PreSumMap;
        int n = A.size();
        int sum = 0;
        int count = 0;

        // Initialize with sum 0 having one occurrence (this helps for subarrays that start at index 0)
        PreSumMap[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += A[i]; // Compute the running sum

            // Check if (sum - K) exists in the map, which means there's a valid subarray ending at index i
            if (PreSumMap.find(sum - K) != PreSumMap.end()) {
                count += PreSumMap[sum - K];
            }

            // Update the prefix sum count in the map
            PreSumMap[sum]++;
        }

        return count; // Return the total number of subarrays with sum K
    }
};

int main()
{
    Solution s;
    vector<int> A = {1, -1, 5, -2, 3};
    int K = 3;
    
    cout << "Number of subarrays with sum " << K << ": " << s.subarraySum(A, K) << endl;
    
    return 0;
}