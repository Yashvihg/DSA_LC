class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        if(n==0 || m==0) return false;
        int s=0, e=n*m-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            int val = matrix[mid/m][mid%m]; // val is out of the value from the array. 
            if(target == val) return true;
            else if(target<val) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
};