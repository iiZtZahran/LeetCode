/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr ; 
        ListNode* cur = head ; 
        ListNode* nextNode = nullptr;

        //chain the cur to the prev LL with next pointing to nullptr in itr 1 and so on 
        while(cur != nullptr){
            nextNode = cur->next ; 
            cur->next = prev;
            prev = cur ;
            cur = nextNode;
        }

        
        return prev;
    }
};