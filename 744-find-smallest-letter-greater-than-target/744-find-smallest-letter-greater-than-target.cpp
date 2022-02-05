class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        int s=0, e=l.size()-1, mid;
        while(s<=e){
            mid = s + (e-s)/2;
            if(target < l[0] || target >= l[l.size()-1]) return l[0];
            else if(target < l[mid]) e=mid-1;
            else s=mid+1;
        }
        return l[s];    
    }
};