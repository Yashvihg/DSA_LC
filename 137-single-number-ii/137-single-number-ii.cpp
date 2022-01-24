class Solution {
public:
int singleNumber(vector<int>& nums) {
        int val1 = 0, val2 = 0;
        for (int i = 0; i < nums.size(); i++){
            val1 = (~val2) & (val1 ^ nums[i]);
            val2 = (~val1) & (val2 ^ nums[i]);
        }
        return val1;
    }
};