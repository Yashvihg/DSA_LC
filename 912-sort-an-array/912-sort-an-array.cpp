class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> res;
        priority_queue<int> p;
        for(int i=0;i<nums.size();i++)
            p.push(nums[i]);
        while(!p.empty()){
        int c=p.top();
        p.pop();
        res.push_back(c);
        }
        reverse(res.begin(),res.end());
        return res;
        }
};