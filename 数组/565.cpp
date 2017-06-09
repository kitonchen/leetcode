/*
题解：能够重置数组的条件是元素个数相等，先进行判断。
        可以转换就用一个临时行数组，不断填装，填满后插入新的矩阵中。
*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int orir = nums.size();
        int oric = nums[0].size();
        if(orir*oric != r*c){
            return nums;
        }else{
            vector<vector<int>> newnum;
            vector<int> rownum;
            int i=0,j=0,k=0;
            while(i<orir && j<oric)//插到最后一个元素
            {
                rownum.push_back(nums[i][j]);//插入元素
                j++;//列加1
                if(j == oric)//原矩阵第一行插满，行加1，列为0
                {
                    i++;
                    j=0;
                }
                if(rownum.size() == c)//新行装满后，插入新矩阵
                {
                    newnum.push_back(rownum);
                    rownum.clear();
                }
            }
            return newnum;
        }
    }
};