#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description/
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        // Step 1: Sort the skill array
        sort(skill.begin(), skill.end());

        int n = skill.size();
        int requiredSkill = skill[0] + skill[n-1];
        long long chemistry = 0;

        // Step 2: Pair players using two pointers
        int start = 0;
        int end = n-1;
        while(start < end){
            if(skill[start] + skill[end] != requiredSkill){
                return -1;
            }else{
                chemistry += skill[start] * skill[end];
                start++;
                end--;
            }
        }
        return chemistry;
    }
};

int main()
{
    Solution s;
    vector<int> skill = {1, 2, 3, 4, 5};
    cout << "Chemistry: " << s.dividePlayers(skill) << endl;
    return 0;
}