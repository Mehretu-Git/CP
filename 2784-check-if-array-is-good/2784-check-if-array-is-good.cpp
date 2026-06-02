class Solution {
public:
    bool isGood(vector<int>& nums) {
        //check if the length is n+1
        sort(nums.begin(),nums.end());
        int n = nums[nums.size()-1]; // n is the maximum number
        unordered_set<int>set(nums.begin(),nums.end());
        if((nums.size() == n+1) && (nums[nums.size()-1] == nums[nums.size()-2])&&(set.size() == nums.size()-1)) return true;
        else return false;

    }
};