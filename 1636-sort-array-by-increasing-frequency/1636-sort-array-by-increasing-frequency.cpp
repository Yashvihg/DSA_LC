class Solution {
public: 
    
    static bool compare(pair<int, int> &a, pair<int, int> &b){
        if(a.second == b.second) return a.first>b.first; //if same number, sortin decreasing order by value
        else return a.second<b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<pair<int, int>> v; 
        vector<int> res;
        for(int i=0; i<nums.size(); i++) freq[nums[i]] ++;  
        for(auto it: freq) v.push_back({it.first, it.second});
        sort(v.begin(), v.end(), compare);
        for(auto it: v){  //it's mapped value is the frequency - it.second
            for(int i=0; i<it.second; i++) res.push_back(it.first);
        }
        return res;
    }
};