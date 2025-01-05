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
    ListNode* middleNode(ListNode* head) {
        int count = 0 ;
        ListNode*temp = head;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        int middle_element = count/2;
        ListNode* mid = head;
        while(middle_element-- )
        {
            mid = mid->next;
        }
        return mid;

    //     if(count%2)
    //     {

    //         while ((count/2)--)
    //         {
    //             head = head->next;
    //         }

    //         ListNode* t =head;
    //         while(t != NULL)
    //         {
    //            return t->val<<",";
    //         }
    //     }

    //     else
    //     {
    //         while ((count/2)--)
    //         {
    //             head = head->next;
    //         }

    //         ListNode* te =head;
    //         while(te != NULL)
    //         {
    //            return te->val;
    //         }
    //     }
    // }
    }
};