class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //transformation
        for(int& num: nums){
            if(num%2 == 0) num = 0;
            else num = 1;
        }
        //initilization
        int running_sum{};
        int count{}; 
        unordered_map<int,int> sum_history{{0,1}};
        for(int num: nums){
            running_sum += num;
            int target = running_sum - k;
            if(sum_history.count(target)){
                count += sum_history[target];
            }
            sum_history[running_sum]++;
        }
        return count;
    }
};