/*
请实现一个函数，将一个字符串中的空格替换成“%20”。
例如，当字符串为We Are Happy.
则经过替换之后的字符串为We%20Are%20Happy。
*/
class Solution {
public:
	void replaceSpace(char *str,int length) {
		int i;
        int num = 0;
        for(i = 0; i < length; i++){
            if(str[i] == ' ')
                num ++;
        }
        num = 2 * num + length;
        for(i = length - 1; i >= 0; i--){
            if(str[i] == ' '){
                str[--num] = '0';
                str[--num] = '2';
                str[--num] = '%';
            }
            else
                str[--num] = str[i];
        }
	}
};