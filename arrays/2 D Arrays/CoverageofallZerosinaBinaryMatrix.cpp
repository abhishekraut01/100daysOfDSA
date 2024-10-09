#include<iostream>
using namespace std;
#include<vector>

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int column = matrix[0].size();
        int ans = 0;
        
        for(int i =0; i<rows; i++){
            
            for(int j=0; j<column; j++){
                
                if(matrix[i][j] == 1){
                    continue;
                }
                
                if(i-1 >=0 && matrix[i-1][j] == 1 ){
                    ans++;
                }
                if(i+1 <rows && matrix[i+1][j] == 1 ){
                    ans++;
                }
                if(j-1 >=0 && matrix[i][j-1] == 1 ){
                    ans++;
                }
                if(j+1 <column && matrix[i][j+1] == 1 ){
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> matrix = {{0,0,0,0},{0,1,1,0},{0,1,1,0},{0,0,0,0}};
    cout << obj.findCoverage(matrix) << endl; // Output: 10
    
    return 0;
}