class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //initialize an empty hashmap
        unordered_map<int,int> num_to_index;
        //populate the map with key: elements of the list
        //value: index of the elements in the list
        int i{};
        for(int num: nums){
            num_to_index[num] = i;
            i++;
        }
        //check whether complement = target - current_number exists
        //inside the map by looping through the list
        for(int j{};j<nums.size();++j){
            int complement = target - nums[j];
            if(num_to_index.count(complement) && num_to_index[complement]!= j){
                return {j,num_to_index[complement]};
            }
        }
        return {};
    }
};