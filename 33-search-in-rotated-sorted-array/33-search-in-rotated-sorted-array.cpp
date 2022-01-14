class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s=0, e = n-1;
        int index = smallestElementIndex(nums, s, e, n);
        int val = BS(nums, index, e, target);
        if(val != -1) {return val;}
        else {return BS(nums, 0, index-1, target);}
        
    }
    
    int smallestElementIndex(vector<int> &nums, int s, int e, int n){
        while(s<=e){
            int mid = s + (e-s)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;

            if((nums[mid] <= nums[next]) && (nums[mid] <= nums[prev]))
                return mid;   
            else 
            {
                if(nums[mid]>=nums[s] && nums[mid]<=nums[e]) { return s; }
                else if(nums[s]<=nums[mid])
                    s=mid+1;
                else if(nums[mid]<=nums[e])
                    e=mid-1;
            }
        }
        return 0;
    }
    
    int BS(vector<int> &nums, int s, int e, int target){
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target)
                return mid; 
            else if(nums[mid]>target)
                e=mid-1;
            else if(nums[mid]<target)
                s=mid+1;
        }
    return -1;
    }
};