/*
当数组只有两个元素时，sum等于最小的数。
大于2，先进行排序，按序分组，1，2为一组，3，4为一组。。。n-1,n为一组。取每组最小相加。为答案
*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
       int n = nums.size();
       long sum=0;
       if(n == 2){
           sum = min(nums[0],nums[1]);
       }else{
            
            sort(nums.begin(),nums.end());
            for(int i=0;i<n;i=i+2)
            {
                sum+=min(nums[i],nums[i+1]);
            }
        }
        
        return sum;
    }
};