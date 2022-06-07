class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t = m+n-1;
        int f=m-1, s=n-1;
        while(f>=0 && s>=0){
            if(nums1[f]<nums2[s])
                nums1[t--] = nums2[s--];
            else nums1[t--] = nums1[f--];
        }
        
        //if second array - nums2.size() is more than nums1 --
        while(s>=0) nums1[t--] = nums2[s--];
        
    }
};