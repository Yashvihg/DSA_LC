class Solution {
public:
    int binarySearch(vector<int>& arr){
        int s=0, e=arr.size()-1, mid;
        while(s<=e){
            mid = s+(e-s)/2;
            if(arr[mid]>=0)
                s=mid+1;
            else e=mid-1;   
        }
        return arr.size()-1-e;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0; 
        for(int i=0; i<grid.size(); i++){
            count = count + binarySearch(grid[i]);
        }
        return count;
    }
};