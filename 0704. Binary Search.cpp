704. Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid;
        while(s<=e)
        {
            mid = (s+e)/2;
            if(nums[mid]>target)
            {
                e = mid - 1;
            }
            else if(nums[mid]<target)
            {
                s = mid + 1;
            }
            else{
                return mid;
            }

        }
        return -1;
    }
};
