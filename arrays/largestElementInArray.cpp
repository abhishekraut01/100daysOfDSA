#include<iostream>
#include<vector>

using namespace std;

class solution{
    public:
    int findMax(vector<int> arr){
        int max = INT_FAST8_MIN;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>max)
                max = arr[i];
        }
        return max;
    }
};
int main()
{
    solution s;
    vector<int> arr = {1, 5, 9, 10, 15};
    cout << "Maximum element in the array is: " << s.findMax(arr) << endl;
    
    return 0;
}