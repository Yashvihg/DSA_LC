class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int uppercount=0, lowercount=0;
        // lowercount=0;
        if(word.size()<=1){return true;}
          for(int i=0; i<word.size(); i++){
               if(isupper(word[i]))   
                uppercount++;
              else lowercount++;
          }  
        
          if((lowercount == word.size() || uppercount == word.size()) || (isupper(word[0]) && lowercount == word.size()-1)) return true;
          else return false;

    };
};