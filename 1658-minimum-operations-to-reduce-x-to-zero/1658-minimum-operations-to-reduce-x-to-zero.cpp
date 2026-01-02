class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        //just find the maximum length subarray that satisfies:
        //sum(subarray) = sum(array) - x
        unordered_map<int,int> sum_to_index{{0,-1}};
        int running_sum = 0;
        int total{};
        for(int num: nums){
            total = total + num;
        }
        int target = total - x;
        int operations = -1;
        int max_length{};
        if(target<0) return -1;
        if(target==0) return nums.size();
        for(int i{};i<nums.size(); i++){
            running_sum = running_sum + nums[i];
            if(sum_to_index.count(running_sum-target)){//here we've found the subarray
                int temp_length = i - sum_to_index[running_sum - target];
                max_length = max(temp_length, max_length);
                operations = nums.size() - max_length;

            }
            sum_to_index[running_sum] = i;
        }

        return operations;
        
    }
};