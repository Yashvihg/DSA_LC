class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
        return x;
        int s=0, e=x, res;
        while(s<=e){
            long mid=s+(e-s)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x){
                s=mid+1;
                res=mid;
            }
            else e=mid-1;
        }
        return res;
    }
};