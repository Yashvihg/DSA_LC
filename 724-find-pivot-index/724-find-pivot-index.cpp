class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> p(nums.size());
        int ls=0, rs=0;
        p[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            p[i] = p[i-1]+nums[i];
        }
        for(int i=0; i<p.size(); i++){
            ls = p[i]-nums[i];
            rs = p[p.size()-1] - p[i];    
            if(ls == rs)
                return i;
        }
        return -1;
    }
};