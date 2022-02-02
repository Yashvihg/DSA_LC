class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        ans.push_back(first(nums, n, target));
        ans.push_back(last(nums, n, target));

        return ans;
        
    }
    
    int first(vector<int>& nums, int n, int target){
        int res1=-1;
        int s=0, e=n-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(target == nums[mid]){
                res1=mid;
                e=mid-1;
            }
            else if(target<nums[mid])
                e=mid-1;
            else
                s=mid+1;
        }
        return res1;
    }
    
    int last(vector<int>& nums, int n, int target){
        int res2=-1;
        int s=0, e=n-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(target == nums[mid]){
                res2=mid;
                s=mid+1;
            }
            else if(target<nums[mid])
                e=mid-1;
            else
                s=mid+1;
        }
        return res2;
    }
};