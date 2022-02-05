class Solution {
public:
    int arrangeCoins(int n) {
        long reqSum, mid;
        long s=1, e=n, res;
        while(s<=e){
            mid = s+(e-s)/2;
            reqSum =  (mid*(mid+1))/2;
            if(reqSum==n) return mid;
            if(reqSum<n)
                s=mid+1;
                //res=mid;
            else e=mid-1;
            
        }
        return e;
    }
};