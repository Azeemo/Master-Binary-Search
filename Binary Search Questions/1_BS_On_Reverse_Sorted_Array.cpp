LEETCODE LINK  : https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count =-1;
        for(auto x:nums){
            count++;
            if(x==target){
                return count;
            }
        }
        return -1;
    }
};
