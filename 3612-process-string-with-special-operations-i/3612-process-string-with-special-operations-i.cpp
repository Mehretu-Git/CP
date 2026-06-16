class Solution {
public:
    string reversed(string s){
        if(s.size() <= 1) return s;
        return reversed(s.substr(1)) + s[0];
    }
    string duplicated(string s){
        string newS = s;
        for(char c: s){
            newS += c;
        }
        return newS;
    }
    string popped(string s){
        if (s.empty()) return s; 
        return s.substr(0, s.size() - 1);
    }
    string processStr(string s) {
        string result = "";
        for(char c: s){
            if(c=='*') result = popped(result);
            else if(c=='#') result = duplicated(result);
            else if(c =='%') result = reversed(result);
            else result += c;
        }
        return result;
    }
};