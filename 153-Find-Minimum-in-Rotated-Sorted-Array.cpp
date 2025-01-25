//good
class Solution {
public:
    int findMin(vector<int>& nums) {
     int n=nums.size();
     int low=0;
     int high=n-1;
     int ans=INT_MAX;

     while(low<=high){
    int mid=low+(high-low)/2;

    // check if the array is sorted (or search domain is sorted)
    while(low<=high){
        if(nums[low]<=nums[high]){
            ans=min(ans,nums[low]);
            break;
        }
    }
    //left is sorted
    if(nums[mid]>=nums[low]){
        ans=min(ans,nums[low]);
       low=mid+1;
    }
    else{  //right is sorted
    ans=min(ans,nums[mid]);
    high=mid-1;

    }
    
     }  
     return ans; 
    }
};