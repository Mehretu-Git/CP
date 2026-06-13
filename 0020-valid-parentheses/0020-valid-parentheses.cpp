class Solution {
public:
    bool isValid(string s) {
        vector<char> stack = {};
        for(char parenthesis: s){
            if((parenthesis == '(')||(parenthesis == '{')||(parenthesis == '[')) stack.push_back(parenthesis);
            else if(stack.size()){
                if(parenthesis == ')')
                    if (stack[stack.size()-1] == '(') 
                        stack.pop_back();
                    else
                        return false;
                if(parenthesis == '}')
                    if(stack[stack.size()-1] == '{') 
                        stack.pop_back();
                    else
                        return false;
                if(parenthesis == ']')
                    if(stack[stack.size()-1] == '[') 
                        stack.pop_back();
                    else
                        return false;
            }
            else return false;
        }

        if(stack.size()) return false;
        else return true;
        }
    };
