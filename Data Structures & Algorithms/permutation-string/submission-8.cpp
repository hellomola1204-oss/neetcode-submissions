class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> map;
        for(char x:s1){
            map[x]++;
        }
        string tmp;

        for(int l= 0;l<s2.size();l++){
            if(map[s2[l]]==0){
                continue;

            }
            else{
                for(int r= l;r<l+s1.size();r++){
                    if(map[s2[r]]==0) {
                        tmp="";
                        break;
                    }
                    else{
                        tmp+= s2[r];
                    }
                }
                sort(tmp.begin(),tmp.end());
                sort(s1.begin(),s1.end());
                if(tmp==s1) return true;
                else tmp="";
               
            
            }

        }
        return false;



        
    }
};
