#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i]!= largest) {
                secondLargest = arr[i];
            }
        }
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 5};
    int n;
    Solution obj;
    n = arr.size();
    cout << "Second largest element is " << obj.getSecondLargest(arr);
    return 0;
}