class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {   //p - points
        int index = -1;
        int res = INT_MAX;
        for(int i=0; i<p.size(); i++){
            if(x==p[i][0] || y==p[i][1]){
                int distance = abs(x-p[i][0]) + abs(y-p[i][1]);
                if(distance<res){
                    res = distance;
                    index = i;
                }
            }
        }
        return index;
    }
};