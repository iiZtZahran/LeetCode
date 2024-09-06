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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0 ;
        ListNode* temp = head;

        while(temp != nullptr){
            len++;
            temp = temp->next;
        }

        int pos = len - n ;

        //handle if the LL has only 1 element 
        if(pos == 0  ){
            ListNode* nodeToDelete = head; // to save the cur
            head = head->next;
            delete nodeToDelete;
            return head;
        }

        temp = head;
        for(int i = 0; i < (pos-1); i++){
            temp = temp->next;
        }
        
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode; 
        return head;
    }
};