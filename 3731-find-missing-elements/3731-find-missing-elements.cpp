class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int mx = nums[size(nums) - 1];
        vector<int> ans;

        unordered_set<int> rNums(nums.begin(), nums.end());

       for(int i = mn; i<=mx; i++)
            if(!rNums.contains(i)) ans.push_back(i);
       
       return ans;
    }
};