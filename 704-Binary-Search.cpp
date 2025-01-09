class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower = 0;
        int high = nums.size()-1;
        while(lower<= high){
            int mid =(lower + high)/2;
            if(nums[mid]== target) return mid;
            if(nums[mid]< target ) lower = mid+1;
            else high =mid -1;
        } 
        return -1;
    }
};