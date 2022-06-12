class Solution {
public:
    int MAH(vector<int> &hist){
        stack<int> s;
        int maxEle = 0;
        int n = hist.size();
        for(int i=0; i<=n; i++){
            while(!s.empty() && (i==n || hist[s.top()]>=hist[i])){
                int height = hist[s.top()];
                s.pop();
                int width;
                if(s.empty()) width = i;
                else width = i - s.top() - 1;
                maxEle = max(maxEle, width*height);
            }
            s.push(i);
        }
        return maxEle;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(n==0) return 0;
        int m=matrix[0].size(), result=0;
        vector<int> hist(m, 0);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]=='1')
                    hist[j]+=1;
                else
                    hist[j]=0;
            }
            
            result = max(result, MAH(hist));
        }
        return result;
    }
};