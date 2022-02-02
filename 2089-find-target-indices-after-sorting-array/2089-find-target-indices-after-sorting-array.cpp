class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(begin(nums), end(nums));
        int count=0, index=0;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==target){
                // ans.push_back(i);
                count++;
            }
            if(nums[i]<target) index++;
        }
        while(count--) ans.push_back(index++);
        return ans;
    }
};