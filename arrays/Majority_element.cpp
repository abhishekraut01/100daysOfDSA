// https://leetcode.com/problems/majority-element/description/
//Boyer-Moore Voting Algorithm

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        map<int , int>Solution;
        int ans = -1;
        
        for(int i=0; i<n; i++){
           Solution[arr[i]]++;
        }

        for(auto elem : Solution){
            if(elem.second > n/2 ){
                ans = elem.first;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 2, 3};
    cout << obj.majorityElement(nums) << endl; // Output: 3

    
    return 0;
}