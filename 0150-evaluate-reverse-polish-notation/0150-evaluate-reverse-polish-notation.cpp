class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        for(const auto& token: tokens){
            if(token == "/"){
                int top = stack.back();
                stack.pop_back();
                int newTop = stack.back()/top;
                stack.pop_back();
                stack.push_back(newTop);
            }
            else if(token == "+"){
                int top = stack.back();
                stack.pop_back();
                int newTop = stack.back() + top;
                stack.pop_back();
                stack.push_back(newTop);
            }
            else if(token == "-"){
                int top = stack.back();
                stack.pop_back();
                int newTop = stack.back() - top;
                stack.pop_back();
                stack.push_back(newTop);
            }
            else if(token == "*"){
                int top = stack.back();
                stack.pop_back();
                int newTop = stack.back() * top;
                stack.pop_back();
                stack.push_back(newTop);
            }
            else{
                stack.push_back(stoll(token));
            }
        }
        return stack.back();
    }
};