#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> sol(nums.begin() , nums.end());
        nums.clear();

        for(auto it : sol){
            nums.push_back(it);
        }

        return nums.size();
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    int n = s.removeDuplicates(nums);
    cout << "The size of the new array after removing duplicates is: " << n << endl;
    for(int i=0; i<n; i++)
        cout << nums[i] << " ";
    cout << endl;

    
    return 0;
}