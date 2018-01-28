/**
一只青蛙一次可以跳上1级台阶，也可以跳上2级。
求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/
class Solution {
public:
    int jumpFloor(int number) {
    	if(number <= 0){
    		return -1;
    	}
        if(number == 1 || number == 2){
        	return number;
        }
        return jumpFloor(number - 1) + jumpFloor(number - 2);
    }
};
/*非递归
public int JumpFloor(int target){
　　if(target<0)
　　　　return 0;
　　int[] fib={0,1,2}; 
　　if(target<3)
　　　　return fib[target];
　　int total=0;
　　int firstElem=1;
　　int secondElem=2;
　　for(int i=3;i<=target;i++){  
　　　　total=firstElem+secondElem;
　　　　firstElem=secondElem;
　　　  secondElem=total;  //迭代
　　}
　　return total;
}
*/