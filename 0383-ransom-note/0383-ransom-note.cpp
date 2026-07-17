class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransomNoteMap;
        unordered_map<char, int> magazineMap;
        for(char& letter: ransomNote)
            ransomNoteMap[letter]++;
        for(char& letter: magazine)
            magazineMap[letter]++;
        for(const auto& [letter, frequency]: ransomNoteMap){
            if(frequency > magazineMap[letter]) return false;
        }
        return true;
    }
};