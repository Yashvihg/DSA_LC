class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x=nums.size();
        int a[1001] = {0};
        for(int val: nums) a[val]++;
        for(int i=0; i<1001; i++){
            if(i==x)
                return i;
            x-=a[i];
        }
        return -1;
    }
};