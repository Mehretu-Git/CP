class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> remainder_history{{0,-1}};
        int running_sum = 0;
        for(int i{}; i<nums.size();++i){
            running_sum = running_sum + nums[i];
            int remainder = running_sum%k;
            if(remainder_history.count(remainder)){
                if(i-remainder_history[remainder]>1){
                    return true;
                }
            }
            else{
                remainder_history[remainder] = i;
            }

        }
    return false;
    }
};