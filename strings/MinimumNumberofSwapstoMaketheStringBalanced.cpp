#include<iostream>

using namespace std;

class Solution 
{
public:
    int minSwaps(string s) 
    {
        int openedCount = 0;
        for (auto ch : s)
        {
            if (ch == '[')
                openedCount++;
            else
            {
                if (openedCount > 0)
                    openedCount--;
            }
        }

        return (openedCount + 1) / 2;
    }
};

int main()
{
    
    return 0;
}