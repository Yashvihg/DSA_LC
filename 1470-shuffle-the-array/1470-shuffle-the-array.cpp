class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int j=n, i=0;
        
        while(j<2*n){
            arr.push_back(nums[i++]);
            arr.push_back(nums[j++]);
        }
        return arr;
    }
};