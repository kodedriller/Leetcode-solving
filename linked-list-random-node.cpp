// 382. Linked List Random Node

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */


// class Solution {
//     private:
//     vector<ListNode*> nodes;
//     public:
//     Solution(ListNode* head) {
//         while(head!=NULL){
//             nodes.push_back(head);
//             head=head->next;
//         }
//     }
    
//     int getRandom() {
//         int randomindez=rand()%nodes.size();
//         return nodes[randomindez]->val;
//     }
// };


// follow up

class Solution{
    private:
    ListNode* head;
    public:
    Solution (ListNode* h){
        head =h
    }
    int getRandom(){
        ListNode* curr=head;
        int res=curr->val;
        int i=1;
        while(curr!= NULL){
            if(rand()%i==0){
                res=curr->val;
            }
            curr=curr->next;
            i++;
        }
        return res;
    }

};