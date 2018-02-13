/**
现在要求输入一个整数n，请你输出斐波那契数列的第n项。
n<=39
*/
class Solution {
public:
    int Fibonacci(int n) {
		int a = 1, b = 1;
        if(n < 1)
            return 0;
        else if(n < 3)
            return 1;
        else{
            int res;
            while(n > 2){
                res = a + b;
                a = b;
                b = res;
                n --;
            }
            return res;
        }
        return -1;
    }
};