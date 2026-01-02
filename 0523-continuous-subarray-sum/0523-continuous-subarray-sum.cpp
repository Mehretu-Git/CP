class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int running_sum_modulo{};

        unordered_map<int,int> reminder_to_index;
        reminder_to_index[0] = -1;
        for(int i{};i<nums.size();i++){
            running_sum_modulo = (running_sum_modulo+nums[i])%k;
            if(!(reminder_to_index.count(running_sum_modulo)))
               reminder_to_index[running_sum_modulo] = i;  
            else if((i - reminder_to_index[running_sum_modulo])>1)
                return true;
            
        }
        return false;
    }
};