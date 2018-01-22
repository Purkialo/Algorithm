/*
在一个二维数组中，每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
*/
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int r = array.size();
        int c = array[0].size();
        int i,j;
        for(i = r - 1,j = 0; i >= 0 && j < c;){
            if(array[i][j] == target)
                return true;
            else if(array[i][j] > target){
                i--;
                continue;
            }
            else{
                if(array[i][j] < target) {
                    j++;
                    continue;
                }
            }
        }
        return false;
    }
};
