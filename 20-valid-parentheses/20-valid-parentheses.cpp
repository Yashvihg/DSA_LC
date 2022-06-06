class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(auto it: s){
            if(it == '(' || it == '[' || it == '{')
                stk.push(it);
            else {
                // if the stack starts with - },),] then stack will be empty
                if(stk.empty()) return false;
                // if otherwise not empty but - },),] are coming up
                char c = stk.top();
                stk.pop();
                if((it == ')' && c == '(') || (it == '}' && c == '{') || (it == ']' && c == '['))
                    continue;
                else return false;
            }
        }
        return stk.empty();
    }
};