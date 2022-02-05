class Solution {
public:
    int arrangeCoins(int n) {
        long reqSum, mid;
        int s=1, e=n, res;
        while(s<=e){
            mid = s+(e-s)/2;  //rows
            reqSum =  (mid*(mid+1))/2;
            if(reqSum<=n){
                s=mid+1;
                res=mid;
            }
            else e=mid-1;
            
        }
        return res;
    }
};