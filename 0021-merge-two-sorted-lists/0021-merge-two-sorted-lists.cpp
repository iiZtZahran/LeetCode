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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* output = new ListNode(0);
        ListNode* cur = output;
       
        while(list1 != nullptr && list2 != nullptr){
            //once either list reach the nullptr the loop will terminate 
            if(list1->val <= list2->val){
                cur->next = list1;
                list1 = list1->next;
            }
            else{
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }
        //add the remaining of either of the non null node 
        if(list1 != nullptr){
            cur->next = list1;
        }else{
            cur->next = list2;
        }

        

        

        ListNode* result = output->next;
        delete output;
        return result;

    }
};