#include <iostream>
#include <set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> mySet;
        for(int i=0;i<nums.size();i++){
            mySet.insert(nums[i]);
        }
        nums.assign(mySet.begin(), mySet.end());
        return   mySet.size();
    }
};