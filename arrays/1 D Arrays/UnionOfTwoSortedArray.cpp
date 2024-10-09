#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution{
    public:
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(const vector<int>& arr1, const vector<int>& arr2)
    {
       set<int> temp;

       // Insert all elements of arr1 into the set
       for(int i = 0; i < arr1.size(); i++){
           temp.insert(arr1[i]);
       }
       
       // Insert all elements of arr2 into the set
       for(int i = 0; i < arr2.size(); i++){
           temp.insert(arr2[i]);
       }
       
       // Create a vector from the set
       vector<int> result(temp.begin(), temp.end());
       return result;
    }
};

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 4, 5};
    vector<int> arr2 = {1, 2, 3, 4, 4, 5, 6, 7};

    Solution obj;
    vector<int> unionArray = obj.findUnion(arr1, arr2);

    // Print the result
    cout << "Union of two sorted arrays is: ";
    for(int i = 0; i < unionArray.size(); i++) {
        cout << unionArray[i] << " ";
    }
    cout << endl;

    return 0;
}
