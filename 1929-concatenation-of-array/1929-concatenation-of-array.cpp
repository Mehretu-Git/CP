class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result = nums;
        for(int i{}; i<nums.size();i++){
            result.push_back(result[i]);
        }
        return result;
    }
};