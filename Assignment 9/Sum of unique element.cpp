class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      map<int,int>mp;
      for(auto x:nums){
          mp[x]++;
      }
      int sum=0;
      for(auto x:mp){
          if(x.second==1){
              sum=sum+x.first;
          }
      }
      return sum;
    }
};



#Question
https://leetcode.com/problems/sum-of-unique-elements/description/
