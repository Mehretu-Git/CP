class Solution {
public:
    int weight(string word, vector<int>& weights){
        map<char,int>alpha_to_num = {};
        int weight{};
        for(int i{}; i<26; i++){
            alpha_to_num[char(97+i)] = weights[i];
        }
        for(char letter: word) weight += alpha_to_num[letter];
        return weight%26;
    }
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<int,string>num_to_alpha = {};
        string ans = "";
        for(int i{25}; i>-1; i--){
            num_to_alpha[i] = char(122-i);
        }
        for(auto word: words){
            ans += num_to_alpha[weight(word,weights)];
        }
        return ans;
        
    }
};