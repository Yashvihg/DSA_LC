class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        while(s<=e){
            while(s<e && nums[s]==nums[s+1])s++;
            while(e>s && nums[e]==nums[e-1])e--;
            int mid = s + (e-s)/2;
            if(nums[mid] == target) return true;
            if(nums[mid]>=nums[s]){
                if(target>=nums[s] && target<nums[mid])
                    e=mid-1;
                else s=mid+1;
            }
            else{
                if(target<=nums[e] && target>nums[mid])
                    s=mid+1;
                else e=mid-1;
            }
        }
        return false;
    }
};