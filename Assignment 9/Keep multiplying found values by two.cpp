class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s(begin(nums), end(nums));
        while (s.count(original)) original *= 2;
        return original;
    }    
};


#Question
https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/
