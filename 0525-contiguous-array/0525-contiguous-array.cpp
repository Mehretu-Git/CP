class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int &bit: nums){
            if(bit == 0) bit = -1; 
        }
        int running_sum{};
        int max_length{};
        unordered_map<int,int>sum_to_index{{0,-1}};//sum was 0 before the array begins
        for(int i{};i<nums.size();++i){
            running_sum += nums[i];
            if(sum_to_index.count(running_sum)){//found a subarray whose sum is 0
                int temp_length = i - sum_to_index[running_sum];
                max_length = max(max_length, temp_length);
            }
            else
                sum_to_index[running_sum] = i;
        }
        return max_length;
    }
};