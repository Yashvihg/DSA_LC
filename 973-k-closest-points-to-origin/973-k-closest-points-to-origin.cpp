class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) { //p - points
        priority_queue<vector<int>> maxh;
        vector<vector<int>> res(k);
        for(int i=0; i<p.size(); i++){
            int x = p[i][0];
            int y = p[i][1];
            maxh.push({x*x+y*y, x, y}); // vector with size 3 and [0,1,2] indexes
            if(maxh.size()>k) maxh.pop();
        }
        for(int i=0; i<k; i++){
            vector<int> top = maxh.top();
            maxh.pop();
            res[i] = {top[1], top[2]};
        }
        return res;
  
    }
};