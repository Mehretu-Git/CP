class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //start--initializations
        vector<int> res = {};
        map<int,int> counts = {};
        
        //Make sure nums1 is always the smaller list
        if(nums1.size() > nums2.size())
           swap(nums1,nums2);
        
        //populate the counts dictionary
        for(int num: nums1){
            counts[num]++;
        }
        
        //create the intersection vector
        for(int num: nums2){
            if(counts[num]>0){
                res.push_back(num);
                counts[num]--;
            }
        }
        return res;
    }
};