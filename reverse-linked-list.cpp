// 206. Reverse Linked List

//iterative
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         while(curr!=head){
//             ListNode* next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }
// };


//recursive

class Solution {
    public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* reversed = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return reversed;
    }
};