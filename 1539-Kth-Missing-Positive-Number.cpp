class Solution {
public:
    int bs(vector<int>&arr ,int k){
             int s=0,e=arr.size()-1,mid;
        while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]-(mid+1)<k) s=mid+1; 
        else e=mid-1;
        } 
        return k+s;
        //T.C=O(log n) S.C=O(1)
    }
    int bruteforce(vector<int>&arr,int k){
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k) k++;
            else break;
        }
        return k;
        //T.C=O(n) S.C=O(1)
    }
    int findKthPositive(vector<int>& arr, int k) {
        //return bruteforce(arr,k);
        return bs(arr,k);
    }
};