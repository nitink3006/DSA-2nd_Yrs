class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end());
        for(auto i : nums){
            int n= 0;
            while(i){
                int rem = i % 10;
                n = n * 10 + rem;
                i /= 10;
            }
                s.insert(n);
        }
        return s.size();
    }
};


#Question
https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/
