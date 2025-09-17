class Solution {
public:
    int gcd(int a, int b){
        if(a==0) return b;
        return gcd(b%a,a);
    }
    int gcdOfArrays(vector<int>& arr){
        int res = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            res = gcd(arr[i], res);

            if (res == 1)
                return 1;
            }
        return res;
        }
    bool isGoodArray(vector<int>& nums) {
        return gcdOfArrays(nums) == 1;
    }
};