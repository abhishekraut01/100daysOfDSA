#include<iostream>
#include<vector>

using namespace std;

class solution{
    public:
    int isSorted(vector<int> arr){
        int count = 0;
        int n = arr.size();
        for(int i=1; i<n-1; i++){
            if(arr[i] < arr[i-1]){
                count++;
            }
        }
        if(arr[n-1] > arr[0]) count ++;
        return count <=1;
    }
};

int main()
{
    solution s;
    vector<int> arr = {3,4,5,1,2};
    cout << "Is the array sorted and rotated? " << (s.isSorted(arr)? "Yes":"No") << endl;
    
    return 0;
}