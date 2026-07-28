class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        char middle = s[n/2];
        string ans;
        if(n==1) return s;
        if(n%2==0){
            ans = s.substr(n/2);
            sort(ans.begin(), ans.end());
            s = ans;
            reverse(s.begin(), s.end());
            ans += s;
        }
        else{
            ans = s.substr(0,n/2);
            cout<<ans<<endl;
            sort(ans.begin(), ans.end());
            s = ans;
            reverse(s.begin(), s.end());
            ans = ans + middle + s;
        }
        return ans;
    }
};