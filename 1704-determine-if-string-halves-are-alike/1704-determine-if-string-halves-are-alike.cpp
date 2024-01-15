class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char>ans;
        string a,b;
        int sum=0,count=0;
        for(int i=0;i<s.size();i++)
        ans.push_back(s[i]);
        int n=ans.size();
        int mid=n/2;
        for(int i=0;i<mid;i++){
            if(ans[i]=='a'||ans[i]=='e'||ans[i]=='i'||ans[i]=='o'||ans[i]=='u'||ans[i]=='A'||ans[i]=='E'||ans[i]=='I'||ans[i]=='O'||ans[i]=='U')
                
                sum++;
    }
        for(int j=mid;j<n;j++){
            if(ans[j]=='a'||ans[j]=='e'||ans[j]=='i'||ans[j]=='o'||ans[j]=='u'||ans[j]=='A'||ans[j]=='E'||ans[j]=='I'||ans[j]=='O'||ans[j]=='U')
                
                count++;
        }
        if(sum==count)
            return true;
        
        return false;
    }
};