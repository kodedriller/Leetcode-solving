// 25. Reverse Nodes in k-Group

//using recursive stack in O(k) space

// class Solution{
//     public:
//     ListNode* reverseKGroup(ListNode* head, int k){
//         ListNode* curr=head;
//         int count=0;
//         while(curr!=nullptr && count!=k){
//             curr=curr->next;
//             count++;
//         }
//         if(count==k){
//             curr=reverseKGroup(curr,k);
//             while(count-->0){
//                 ListNode* tmp=head->next;
//                 head->next=curr;
//                 curr=head;
//                 head=tmp;
//             }
//             head=curr;
//         }
//         return head;
//     }
// };


//in O(1) space

class Solution {
    public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            curr = curr->next;
            len++;
        }
        ListNode* prevTail = nullptr;
        ListNode* currHead = head;
        for (int i = 0; i < len / k; i++) {
            ListNode* prev = nullptr;
            ListNode* curr = currHead;
            ListNode* next = nullptr;
            for (int j = 0; j < k; j++) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            if (prevTail == nullptr) {
                head = prev;
            } else {
                prevTail->next = prev;
            }
            prevTail = currHead;
            currHead = next;
        }
        if (prevTail != nullptr) {
            prevTail->next = currHead;
        }
        return head;
    }
};
