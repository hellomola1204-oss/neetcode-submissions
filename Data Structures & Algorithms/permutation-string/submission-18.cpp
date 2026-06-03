class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> map1,map2;
        for(char x:s1){
            map1[x]++;
        }
        map2=map1;
        for(int l= 0;l<s2.size();l++){
            if(map1[s2[l]]==0){
                continue;

            }
            else{
                for(int r= l;r<l+s1.size();r++){
                    if(map1[s2[r]]==0) {
                        map2=map1;
                        break;
                    }
                    else{
                        map2[s2[r]]--;
                        
                        }
                    }
                    bool ok = true;
               for( char c:s1){
                if(map2[c]!=0) {
                    map2=map1;
                    ok = false;
                    break;
               }
                    
            
                    }
                     if(ok) return true;
            }
        }
                
        return false;



        
    }
};
