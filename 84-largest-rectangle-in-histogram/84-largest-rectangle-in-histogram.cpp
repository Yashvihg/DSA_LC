class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n = heights.size();
        int left[n], right[n];
        //for finding left smallest element
        for(int i=0; i<n; i++){
            while(!s.empty() && heights[s.top()]>=heights[i]) 
                s.pop();
            if(s.empty())
                left[i] = 0;
            else left[i] = s.top() +1 ;  // +1
            s.push(i);
        }
        while(!s.empty()) {s.pop();}
        //to find smallest element to right
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && heights[s.top()]>=heights[i]) 
                s.pop();
            if(s.empty()) 
                right[i] = n-1;
            else right[i] = s.top() -1; //-1
            s.push(i);
        }
        int maxEle=0;
        for(int i=0; i<n; i++){
            // maxEle = max(maxEle, heights[i] * (right[i] - left[i] - 1));
            maxEle = max(maxEle, heights[i] * (right[i] - left[i] + 1));
        }
        return maxEle;
        
    }
};