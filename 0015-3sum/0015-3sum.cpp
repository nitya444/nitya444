class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n,i,j,k,target=0;
        n=nums.size();
      sort(nums.begin(),nums.end());
        set<vector<int>>set;
        vector<vector<int>>ans;
        for(i=0;i<n;i++){
            j=i+1;
            k=n-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    set.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<target){
                    j++;
                }
                    else{
                        k--;
                    }
                }
            }
        for(auto it:set){
            ans.push_back(it);
        }
        return ans;
    }
};