class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        if(a.length() < b.length()) swap(a,b);
        while(a.length() != b.length()){
            b = '0' + b;
        }
        string carry = "0";
        for(int i = a.length()-1; i >= 0; i--){
            if(carry == "0"){
                if(a[i] != b[i]){
                    ans += "1";
                }
                else if(a[i] == '1'){
                    ans += "0";
                    carry = "1";
                }
                else{
                    ans += "0";
                }
            }
            else{
                if(a[i] != b[i]){
                    ans += "0";
                }
                else if(a[i] == '1'){
                    ans += "1";
                }
                else{
                    ans += "1";
                    carry = "0";
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return carry == "1"? ("1" + ans) : ans;
    }
};