class Solution {
public:
    int lengthOfLastWord(string s) {
     int count=0,flag=0;
        int l=s.size();
      for(int i=l-1;i>=0;i--){
          if(s[i]==' ' && flag)
              break;
          if(s[i]!=' '){
              flag=1;
              count++;
          }
      }
        return count;
    }
};