class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count{};
        for(string p: patterns){
            if(word.contains(p)) count++;
        }
        return count;
    }
};