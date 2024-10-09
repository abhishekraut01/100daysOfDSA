#include<iostream>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int len = s.size();
        int OpenCounter = 0;
        int closeCounter = 0;

        for(char c : s){
            if(c == '('){
                OpenCounter++;
            }else{
                    if(OpenCounter > 0){
                    OpenCounter--;
                }else{
                    closeCounter ++;
                }
            }
        }
        

        return OpenCounter + closeCounter;
    }
};

int main()
{
    Solution s;
    string str = "())";
    cout << "Minimum number of parentheses to add: " << s.minAddToMakeValid(str) << endl;
    
    return 0;
}