class Solution {
public:
    int characterReplacement(string s, int k) {
       int l= 0;
       int r= 0;
       int res= 0;
       unordered_map<char,int> map;
       int maxfr= 0;
       if(s.length()==0) return res;
       int n = s.length();
       for(r=0;r<n;r++){
        map[s[r]]++;
        maxfr=max(maxfr,map[s[r]]);
        while((r-l+1)-(maxfr)> k){
            map[s[l]]--;
            l++; 
        }
        res=max(res,r-l+1);
        }

       
       return res;

    }
};
