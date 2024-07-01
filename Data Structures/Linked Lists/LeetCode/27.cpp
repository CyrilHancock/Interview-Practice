class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> myVct;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                myVct.push_back(nums[i]);
            }
        }
        nums=myVct;
    return nums.size();
    }
};