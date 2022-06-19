class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rs=0, ls=0;  //right and left sum.
        for(int i=0; i<nums.size(); i++){
            rs+=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            rs-=nums[i];
            if(ls==rs) return i;
            ls+=nums[i];
        }
        return -1;
    }
};