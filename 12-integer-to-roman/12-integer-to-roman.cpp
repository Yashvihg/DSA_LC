class Solution {
public:
    string intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int i=0;
        string romanNo="";
        while(num>0){
            while(num>=values[i]){
                num-=values[i];
                romanNo+=roman[i];
            }
            i++;
        }
        return romanNo;
    }
};