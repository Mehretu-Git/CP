class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>counts = {};
        vector<int> range_(nums.size());
        iota(range_.begin(), range_.end(), 1);
        for(int num: nums){
            counts[num]++;
        }
        for(const auto& [key,value]:counts) 
            if(value > 1)
                ans.push_back(key);
        
        
        set_difference(
            range_.begin(), range_.end(),
            nums.begin(), nums.end(),
            back_inserter(ans)
        );
        return ans;
    }
};