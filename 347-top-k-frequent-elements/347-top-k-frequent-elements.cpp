typedef pair<int, int> pi;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v; 
        unordered_map<int, int> mp;
        priority_queue<pi, vector<pi>, greater<pi>> minh;
        for(int i=0; i<nums.size(); i++) mp[nums[i]] ++; //determines the frequencies
        //to iterate over maps keys-->
        for(auto i = mp.begin(); i!=mp.end(); i++){
            minh.push({i->second, i->first});
                if(minh.size()>k) minh.pop();
        }
        while(!minh.empty()){
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
        
    }
};