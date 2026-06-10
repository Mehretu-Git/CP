class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int left_sum = 0;
        auto range_ = views::iota(1, n+1);
        int right_sum = accumulate(begin(range_), end(range_), 0);
        for(int i{}; i<n; i++){
            if(left_sum == right_sum - range_[i]) return range_[i];
            if(right_sum < left_sum) break;
            left_sum += range_[i];
            right_sum -= range_[i];
        }
        return -1;
    }

};