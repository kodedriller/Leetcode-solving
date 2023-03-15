// // 142. Linked List Cycle II


// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if (head == NULL || head->next == NULL) {
//             return NULL;
//         }
        
//         ListNode *slow = head, *fast = head;
//         bool hasCycle = false;
        
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) {
//                 hasCycle = true;
//                 break;
//             }
//         }
        
//         if (!hasCycle) {
//             return NULL;
//         }
        
//         slow = head;
//         while (slow != fast) {
//             slow = slow->next;
//             fast = fast->next;
//         }
        
//         return slow;
//     }
// };

class Solution {
    public:
    ListNode *detectCycle(ListNode *head){
        ListNode *slow=head, *fast=head;
        do{
            if(fast==NULL || fast->next==NULL) return NULL;
            slow=slow->next;
            fast=fast->next->next;
        }while(slow!=fast);
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};