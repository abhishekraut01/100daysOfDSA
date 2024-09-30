#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

void ReverseArray(vector<int>&arr, int start, int end){
    end = end-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        int n = nums.size();
        k = k % n;
        vector<int>temp(n);

        //copy the all elements in temp
        for(int  i=0; i<n; i++){
            temp[i] = nums[i];
        }

        //copy the last k elements to the start of the array
        for(int i=0; i<k; i++){
            nums[i] = temp[(n-k)+i];
        }

        //copy the remaining elements to the end of the array
        for(int i=k; i<n; i++){
            nums[i] = temp[i-k];
        }
        */
        int n = nums.size();
        k = k % n;
        ReverseArray(nums,0 ,n-k);
        ReverseArray(nums,n-k,n);        
        ReverseArray(nums,0,n);
    }
};

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int k = 3;
    Solution s;
    s.rotate(nums, k);
    
    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}