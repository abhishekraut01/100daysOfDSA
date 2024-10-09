//https://leetcode.com/problems/sort-colors/description/

#include<iostream>

using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int mid = 0;
    
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    
    for(int i=0; i<nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    
    return 0;
}