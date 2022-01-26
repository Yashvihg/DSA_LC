class Solution {
public:
    int fib(int n) {
        // if(n<2) return n;
        // return fib(n-1) + fib(n-2);
        int a1=0, a2=1, sum=0;
        for(int i=0; i<n; i++){
            sum = a1+ a2;
            a1=a2;
            a2=sum;
        }
    return a1;
    }
};