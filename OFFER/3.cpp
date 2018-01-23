/**
*  输入一个链表，从尾到头打印链表每个节点的值。
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        stack<int> buff;
        ListNode* poi = head;
        while(poi){
            buff.push(poi -> val);
            poi = poi -> next;
        }
        while(!buff.empty()){
            res.push_back(buff.top());
            buff.pop();
        }
        return res;
    }
};