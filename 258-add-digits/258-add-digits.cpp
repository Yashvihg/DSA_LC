class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        if(num<=9) return num;
            while(num){
                sum+= num%10;
                num=num/10;
            }
            return addDigits(sum);

    }
};