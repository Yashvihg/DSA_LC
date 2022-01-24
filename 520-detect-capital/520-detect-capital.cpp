class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();

        int uppercount=0, lowercount=0;
        if(n<=1){return true;}
          for(int i=0; i<n; i++){
               if(islower(word[i]))   
                lowercount++;
              else if(isupper(word[i]))   
                uppercount++;
          }  
        
          if(lowercount == n) return true;
          else if(uppercount == n) return true;
          else if(isupper(word[0]) && lowercount == n-1) return true;
          else return false;

    };
};