class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count = 0, index=0;
        vector<int> ans;
        for(int n: nums){
            if(n == target) count++;
            if(n<target) index++;
        }
        while(count--){
            ans.push_back(index++);
        } return ans;
    }
};