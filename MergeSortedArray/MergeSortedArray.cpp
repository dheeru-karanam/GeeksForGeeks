class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int i=0, j=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                arr.push_back(nums2[j]);
                j++;
            }
            else{
                arr.push_back(nums1[i]);
                i++;
            }
        }
        for(;i<m;i++){
            arr.push_back(nums1[i]);
        }
        for(;j<n;j++){
            arr.push_back(nums2[j]);
        }
        for(int i=0;i<m+n;i++){
            nums1[i] = arr[i];
        }
    }
};
