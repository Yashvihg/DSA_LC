class Solution {
public:
    void rotate(vector<vector<int>>& m) { //matrix
        for(int i=0; i<m.size(); i++){
            for(int j=i; j<m[0].size(); j++){
                int temp = 0;
                temp=m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=temp;
            }
        }
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m.size()/2; j++){
                int t=0;
                t=m[i][j];
                m[i][j]=m[i][m.size()-1-j];
                m[i][m.size()-1-j]=t;
            }
        }
    }
};