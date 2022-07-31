class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i=0, j=0;
        vector<int> res;
        vector<int> alphacount(26,0);
        while(j<s.size()){
            alphacount[s[j]-'a']++;
            if(j-i+1 < p.size()) j++;
            else if(j-i+1 == p.size()){
                vector<int> mp = alphacount;
                int ans = true;
                for(auto &it: p)
                    mp[it-'a']--;
                for(auto &it: mp) 
                    if(it!=0) ans = false;
                if(ans == true) res.push_back(i);
                j++;
                alphacount[s[i]-'a']--;
                i++;
            }
        }
        return res;
    }
};