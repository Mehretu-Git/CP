class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans{};
        int sum_{};

        int e = 0;
        while(n){
            sum_ += n%10;
            if(n%10 != 0){
                ans = ans + (n%10) * pow(10,e);
                e++;
            }
            n /= 10;
        }
        return ans * sum_;
    }
};