#include<iostream>
using namespace std;


// this is the bruteforce solution for this problem which takes nearly o(n3) complexity

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int n, int K) 
    { 
        
        int maxLen = 0;
        for(int i=0; i<n; i++){
            
            for(int j=i; j<n; j++){
                
                int sum = 0;
                
                for(int k=i; k<=j; k++){
                    sum += A[k];
                    
                }
                if(sum ==K){
                        maxLen = max(maxLen , (j-i)+1);
                }
                
            }
        }
        return maxLen;
    } 
};



int main()
{
    Solution s;
    int A[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(A)/sizeof(A[0]);
    int K = 7;
    cout << "Length of the longest subarray with sum " << K << " is " << s.lenOfLongSubarr(A, n, K) << endl;

    return 0;
}