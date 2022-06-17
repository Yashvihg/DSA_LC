class Solution {
public:
    bool isUgly(int n) {
        vector<int> p = {2, 3, 5};
        if(n<1) return false;
        for(int i=0; i<p.size(); i++){
            while(n%p[i] == 0) n=n/p[i];
        }
        return n==1;
    }
};