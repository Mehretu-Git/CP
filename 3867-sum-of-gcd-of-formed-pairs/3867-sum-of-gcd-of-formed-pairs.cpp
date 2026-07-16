class Solution {
public:
    int gcd(int a, int b){
        if(b==0)
            return a;
        return gcd(b, a%b);
    }
    long long gcdSum(vector<int>& nums) {
        long long gcdSum = 0;
        vector<int>prefixGcd;
        int mx = 0;
        for(int i{}; i<nums.size(); i++){
            mx = nums[i] > mx? nums[i] : mx;
            prefixGcd.push_back(gcd(nums[i],mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int iter = nums.size()/2;
        int left = 0;
        int right = nums.size()-1;
        while(iter--){
            gcdSum = gcdSum + gcd(prefixGcd[left],prefixGcd[right]);
            left++;
            right--;
        }
        return gcdSum;

    }
};