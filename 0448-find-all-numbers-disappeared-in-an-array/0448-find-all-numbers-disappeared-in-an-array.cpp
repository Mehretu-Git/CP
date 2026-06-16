class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> range_(nums.size());
        iota(range_.begin(), range_.end(), 1);
        sort(nums.begin(),nums.end());

        set_difference(
            range_.begin(), range_.end(),
            nums.begin(), nums.end(),
            back_inserter(ans)
        );

        return ans;
    }
};