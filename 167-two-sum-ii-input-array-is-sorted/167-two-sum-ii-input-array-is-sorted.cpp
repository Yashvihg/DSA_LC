class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0, e=numbers.size()-1;
        while(s<=e){
            // int mid = s+(e-s)/2;
            // if(target < numbers[mid]) e = mid;
            int sum = numbers[s] + numbers[e];
            if(sum == target) return {s+1, e+1};
            else if(sum>target) e--;
            else s++;        
        }
        return {-1, -1};
    }
};