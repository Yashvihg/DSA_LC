class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        if(nums.size() == 1) 
            return nums[0] == target;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target) return true;
            if(nums[mid]<nums[e]){
                if(nums[mid]<target && nums[e]>=target)
                    s=mid+1;
                else e=mid-1;
            }
            else if(nums[mid]>nums[e]){
                if(nums[mid]>target && nums[s]<=target)
                    e=mid;
                else s=mid+1;
            }
            else e--;
        }
        return target == nums[s];
    }
};