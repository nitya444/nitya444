class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s,sum=0;
        s=nums[0]+nums[1]+nums[2];
        vector<vector<int>>ans; 
        for(int i=0;i<n;i++){
            int j=i+1;
           int k=n-1;
        
        while(j<k){
       sum=nums[i]+nums[j]+nums[k];
         if(abs(sum-target)<=abs(s-target))
             s=sum;
        
    
        if(sum<target)
            j++;
        else if(sum>target)
            k--;
        else
            return sum;
        } 
}
        return s;
    }
};