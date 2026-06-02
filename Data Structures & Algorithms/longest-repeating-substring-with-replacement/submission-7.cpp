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
       map[s[r]]++;
       while(l<=r&&r< n){
        maxfr=max(maxfr,map[s[r]]);
        int wdsize= r- l+ 1;
        if((wdsize)-(maxfr)<= k){
            res=max(res,wdsize);
            r++;
            map[s[r]]++;
        }
        else{
        map[s[l]]--;
        l++;

        }

       }
       return res;

    }
};
