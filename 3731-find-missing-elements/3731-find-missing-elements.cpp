class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int mx = nums[size(nums) - 1];
        vector<int> ans;
       for(int i = mn; i<mx; i++){
            if((find(nums.begin(), nums.end(), i))!=nums.end()) continue;
            else{
                ans.push_back(i);
            }
       }
       return ans;
    }
};