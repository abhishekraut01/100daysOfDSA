#include <iostream>
#include <vector>
using namespace std;

class PrintSolution{
    public:
        vector<int> longestSubArray(int A[] , int n , int K){
            vector<int> subArray;
            int maxLength = 0;
          

            for(int start = 0; start < n; start++){
                int sum = 0;
                for(int end = start ; end< n; end++){
                    sum += A[end];

                    if(sum == K && end-start + 1 > maxLength){
                        maxLength = end - start + 1;
                        subArray.clear();
                        for(int i=start; i<=end; i++){
                            subArray.push_back(A[i]);
                        }
                    }
                }
            }
            return subArray;
        }
};

int main() {
    int A[] = {1, 2, 3, 7, 5}; // Example input array
    int n = sizeof(A) / sizeof(A[0]); // Size of the array
    int K = 12; // Example sum to find
    
    PrintSolution ps;
    vector<int> longestSubArray = ps.longestSubArray(A, n, K);
    
    // Output the longest subarray
    if (!longestSubArray.empty()) {
        cout << "Longest subarray with sum " << K << " is: ";
        for (int elem : longestSubArray) {
            cout << elem << " ";
        }
        cout << endl;
    } else {
        cout << "No subarray with sum " << K << " found." << endl;
    }

    return 0;
}
