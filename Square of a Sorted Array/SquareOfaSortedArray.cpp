class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int left =0;
        int right = nums.size()-1;
        int i=0;
        const int size = nums.size()-1;
        while(left<=right){
            if(nums[left]*nums[left]>=nums[right]*nums[right]){
                res[size-i] = (nums[left]*nums[left]);
                i++;
                left++;
            }
            else if(nums[left]*nums[left]<nums[right]*nums[right]){
                res[size-i] = (nums[right]*nums[right]);
                i++;
                right--;
            }
        }
        return res;
    }
};