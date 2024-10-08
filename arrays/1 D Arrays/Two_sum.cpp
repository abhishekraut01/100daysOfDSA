#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        map<int , int> hashmap;
        vector<int> ans;


        for(int i=0; i<n; i++){
            int start = arr[i];
            int rem = target - start;

            if(hashmap.find(rem) != hashmap.end()){
                ans.push_back(i);
                ans.push_back(hashmap[rem]);
            }else{
                hashmap[arr[i]] = i;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(arr, target);
    
    cout << "Two numbers that add up to " << target << " are at indices: ";
    for(int num : result){
        cout << num << " ";
    }
    
    return 0;
}