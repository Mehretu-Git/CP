class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> t_letters_frequency;
        unordered_map <char,int> s_letters_frequency;
        for(auto letter: t){
            t_letters_frequency[letter]+=1;
        }
        for(auto letter: s){
            s_letters_frequency[letter]+=1;
        }
        return s_letters_frequency == t_letters_frequency;
        
    }
};