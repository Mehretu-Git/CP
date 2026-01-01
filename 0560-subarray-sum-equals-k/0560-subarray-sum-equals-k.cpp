class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //initialize empty hashmap
        unordered_map<int,int> sum_history;
        int count{}; int running_sum{};
        sum_history[0] = 1;
        for(int current_number:nums){
            running_sum = running_sum + current_number;
            int gap_needed = running_sum - k;
            if(sum_history.count(gap_needed))
                count = count + sum_history[gap_needed];
            //building the map
            sum_history[running_sum]++;
        }
        return count;
        
    }
};