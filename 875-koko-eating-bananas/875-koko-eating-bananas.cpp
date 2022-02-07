class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1, e=*max_element(piles.begin(), piles.end());
        while(s<e){
            int mid = s+(e-s)/2;
            int k=0; 
            for(int p: piles){
                k =k + (p/mid) + (p%mid != 0);
            }
            if(k<=h)
                e=mid;
            else 
                s=mid+1;
        }
        return e;
    }
};