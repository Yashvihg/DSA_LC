class Solution {
public:
    unordered_map<char, int> m;
    bool compare(string &w1, string &w2){
        int i=0;
        while(i<w1.size() && i<w2.size()){      //or i++ instead, direct in while loop
            if(m[w1[i]] != m[w2[i]]) return m[w1[i]]<m[w2[i]];
            i++;
        }
        return w1.size()<=w2.size();
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<order.size(); i++) m[order[i]] = i; // map letter to index
        for(int i=0; i<words.size()-1; i++)
            if(!compare(words[i], words[i+1])) return false;
            return true;
    }

};