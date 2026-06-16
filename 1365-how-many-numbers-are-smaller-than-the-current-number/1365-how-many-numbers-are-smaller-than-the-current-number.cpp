class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr = nums;
        vector<int> ans;

        sort(nums.begin(),nums.end());
        map<int,int> num_to_smaller;
        for(int i{};i<nums.size();i++)
            if (num_to_smaller.count(nums[i]) == 0) 
                num_to_smaller[nums[i]] = i;
        
        for(int num: arr)
            ans.push_back(num_to_smaller[num]);
        
        return ans;
    }
};