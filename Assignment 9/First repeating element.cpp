int Solution::solve(vector<int> &A) {
    map<int,int>mp;
    for(auto i:A){
        mp[i]++;
    }
    for(auto i:A){
      if(mp[i]>1){
          return i;
      }   
    }
    return -1;
}


#Question
https://www.interviewbit.com/problems/first-repeating-element/
