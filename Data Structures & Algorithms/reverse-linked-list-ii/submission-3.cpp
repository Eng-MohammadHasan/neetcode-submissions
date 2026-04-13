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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        int cnt =1;
        vector<int>arr;
        ListNode* st=head,*end=head;
        while(cnt<left){
            cnt++;
            // arr.push_back(temp->val);
            temp =temp->next;
        }
        st=temp;
        // ListNode* x = temp->next;
        while(cnt<=right){
            cnt++;
            arr.push_back(temp->val);
            temp= temp->next;
        }
        end = temp;
        temp = st;
        reverse(arr.begin(),arr.end());
        // x->next = end->next;
        int i=0;
        while(i<arr.size()){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};