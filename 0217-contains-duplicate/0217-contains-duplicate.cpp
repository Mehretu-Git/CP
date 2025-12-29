class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> value_to_frequency;
        for(int num: nums){
            value_to_frequency[num] += 1;
        }
        for(const auto& pair: value_to_frequency){
            if(pair.second >1)
                return true;
        }
        return false;
    }
};