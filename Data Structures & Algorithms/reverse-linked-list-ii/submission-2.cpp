class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        int cnt = 1;

        vector<int> arr;

        // move to left
        while (cnt < left && temp) {
            temp = temp->next;
            cnt++;
        }

        ListNode* st = temp;

        // collect values
        while (cnt <= right && temp) {
            arr.push_back(temp->val);
            temp = temp->next;
            cnt++;
        }

        // reverse values
        reverse(arr.begin(), arr.end());

        // put back
        temp = st;
        int i = 0;
        while (i < arr.size() && temp) {
            temp->val = arr[i++];
            temp = temp->next;
        }

        return head;
    }
};