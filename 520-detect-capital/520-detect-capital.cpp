class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int uppercount=0;
        // if(word.size()<=1){return true;}
          for(int i=0; i<word.size(); i++){
               if(isupper(word[i]))   
                uppercount++;
          }  
        
          if((uppercount == 0 || uppercount == word.size()) || (isupper(word[0]) && uppercount == 1)) return true;
          else return false;

    };
};