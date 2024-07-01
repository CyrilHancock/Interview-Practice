class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> mySet(nums.size());
        for(int i=0;i<nums.size();i++){
            if(mySet[nums[i]==0]){
                mySet[nums[i]]=1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};