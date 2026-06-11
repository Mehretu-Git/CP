class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x < 10) return true;
        long long original = x;
        long long reverse_{};
        long long tens_power{1};
        while(x>9){
            x /= 10;
            tens_power *= 10;
        }
        x = original;
        while(x){
            reverse_ +=  (x % 10) * tens_power;
            tens_power /= 10;
            x /= 10;
        }
        return original == reverse_;

    }
};