class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxh;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                maxh.push(matrix[i][j]);
                if(maxh.size()>k) maxh.pop();
            }
        }
        return maxh.top();
    }
};