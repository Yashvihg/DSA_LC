class Solution {
public:
    static int bitCount(int val){
        int count=0;
        while(val!=0){
            val = val&(val-1);
            count++;
        }
        return count;
    }
   static bool compare(int a, int b){
        int n1 = bitCount(a);
        int n2 = bitCount(b);
        if(n1 == n2) return a<=b;
        else return n1<n2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};