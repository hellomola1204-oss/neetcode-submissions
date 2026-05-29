class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        int l = 0;
        int r = 1;
        int n = s.length();
        int max_length=1;
        int count = 1;
        unordered_map<char,int> check;
        check[s[l]]=1;
        while(r<n){
            if(check[s[r]]==0){
                count++;
                check[s[r]]++;
                r++;
                max_length=max(max_length, count);
            }
            else{
                l++;
                check.clear();
                check[s[l]]=1;
                count = 1;
                r=l+1;
            }
        }
        return max_length;
        
    }
};
