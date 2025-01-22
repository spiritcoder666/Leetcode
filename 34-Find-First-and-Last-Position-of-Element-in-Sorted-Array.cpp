class Solution {
public:
    int firstoccur(vector<int>& nums, int target) {
        int start=0; 
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>target){
            end=mid-1;}
            else if(nums[mid]<target){
            start=mid+1;}
            else if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            }
             return ans;
    } 
int lastoccur(vector<int>& nums, int target) {
        int start=0; 
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>target){
            end=mid-1;}
            else if(nums[mid]<target){
            start=mid+1;}
            else if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            }
            return ans;
    }
     vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v;
    int first=firstoccur(nums,target);
    int last=lastoccur(nums,target);
    v.push_back(first);
     v.push_back(last);
     return v;
     }
};