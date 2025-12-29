class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> arr_to_frequency;
        int i{};
        for(int num: nums){
            arr_to_frequency[num]+=1;
            i++;
        }
        for(const auto& pair: arr_to_frequency){
            if(pair.second == 1)
                return pair.first;
        }
        return 0;

    }
};