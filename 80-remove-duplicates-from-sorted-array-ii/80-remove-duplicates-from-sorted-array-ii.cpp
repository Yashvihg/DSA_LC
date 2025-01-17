class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int i = 0;
        for(int val: nums){
            if(i<2 || nums[i-2]<val)
               nums[i++]=val;
        }
        return i;
    }
};