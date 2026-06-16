class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int original_position{};
        int index_position{};
        while(index_position < nums.size()){
            if(nums[original_position] != nums[index_position]){
                swap(nums[original_position+1],nums[index_position]);
                original_position++;
            }
            index_position++;
        }
        return original_position+1;
        
    }
};