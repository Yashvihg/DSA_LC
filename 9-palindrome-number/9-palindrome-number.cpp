class Solution {
public:
    bool isPalindrome(long int x) {
      long int rev=0, temp = x, rem=0;
      if(x<0 || (x!=0 && x%10==0) ) return false;
      while(temp>0)
      {
          rem=temp%10;
          rev= rev*10 + rem;
          temp=temp/10;
      }
    return (rev==x); 
    }
};