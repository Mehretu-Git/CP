class Solution {
public:
    char findTheDifference(string s, string t) {
        int ASCISumS = 0;
        int ASCISumT = 0;
        for(char& c: s)
            ASCISumS += static_cast<int>(c);
        for(char& c: t)
            ASCISumT += static_cast<int>(c);
        
        return static_cast<char>(ASCISumT - ASCISumS);
    }
};