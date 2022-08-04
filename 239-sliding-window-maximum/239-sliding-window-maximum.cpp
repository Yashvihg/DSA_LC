class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> mq;
        int i=0, j=0;
        while(j<nums.size()){
            while(!mq.empty() && mq.back()<nums[j]) mq.pop_back();
            mq.push_back(nums[j]);
            if(j-i+1 < k) j++; 
            else if(j-i+1 == k){
                ans.push_back(mq.front());
                if(mq.front() == nums[i]) mq.pop_front();
                i++;
                j++;
            }
        }
        return ans;
    }
};