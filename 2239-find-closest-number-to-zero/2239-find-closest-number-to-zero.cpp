class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(abs(nums[i]) < abs(res)) res = nums[i];
            else if(abs(nums[i]) == abs(res)) res = max(res, nums[i]);    
        }
        return res;
    }
};