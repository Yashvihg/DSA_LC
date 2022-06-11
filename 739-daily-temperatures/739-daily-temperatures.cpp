class Solution {
public:

    vector<int> calcTemp(vector<int> temp){
        vector<int> v;
        stack<pair<int, int>> s;
        for(int i = temp.size()-1; i>=0; i--){
            while(!s.empty() && s.top().first<=temp[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(i); //push -1 into v
            else v.push_back(s.top().second);
            s.push({temp[i], i});
            }   
        reverse(v.begin(), v.end());
        return v;
    }
    
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res = calcTemp(temp);
        for(int i=0; i<res.size(); i++){
            res[i] = res[i] - i;
        }
        return res;
    }
};