class compare{
    public: 
    bool operator() (string &a, string &b){
        if (a.size() != b.size()) return a.size() > b.size();
        return  a > b;   
    }
};
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, compare> minh;
        for(string & str: nums){
            minh.push(str);
            if(minh.size()>k) minh.pop();
        }
        return minh.top();
    }
};