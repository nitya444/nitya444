class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n,i,n1;
        n=nums.size();
        unordered_map<int,int>mp;
        for(i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(i=0;i<n;i++){
            n1=target-nums[i];
            if(mp.count(n1) && mp[n1]!=i){
                return{mp[n1],i};
            }
        }
        return{};
    }
};