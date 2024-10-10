//https://www.geeksforgeeks.org/problems/pair-sum--120604/1

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        int Largest_Pair_Sum = arr[n-1] + arr[n-2];
        
        return Largest_Pair_Sum;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Largest pair sum is: " << s.pairsum(arr) << endl;  // Output: 9
    return 0;
}

