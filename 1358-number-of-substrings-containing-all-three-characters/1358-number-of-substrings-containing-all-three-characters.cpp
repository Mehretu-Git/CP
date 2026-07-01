class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> window_frequency;
        int left = 0;
        int right = 0;
        int count{};
        int n = s.size();
        while(right < n){
            window_frequency[s[right]]++;

            while (window_frequency.size() == 3) {
                
                count += n - right; 

                window_frequency[s[left]]--;
                if (window_frequency[s[left]] == 0) {
                    window_frequency.erase(s[left]);
                }
                left++;
            }
            
            
            right++;
        }
        return count;
    }
};