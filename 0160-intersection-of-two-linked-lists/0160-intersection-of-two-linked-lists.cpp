/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {

        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int countA=0;
        int countB=0;
        while(tempA != NULL)
        {
            countA++;
            tempA = tempA->next;
        }   
        while(tempB != NULL)
        {
            countB++;
            tempB = tempB->next;
        }         
        tempA =headA;
        tempB =headB;

        if(countA == countB)
        {
            while(tempA != NULL && tempB != NULL)
            {

                if(tempA == tempB && tempA->next==tempB->next)
                return tempA;

                tempA =tempA->next;
                tempB =tempB->next;
            }
        }
        else if(countA>countB)
        {
            int diff = countA-countB;
            while(diff--)
            {
                tempA=tempA->next;
            }
            while(tempA != NULL && tempB != NULL)
            {

                if(tempA == tempB && tempA->next==tempB->next)
                return tempA;

                tempA =tempA->next;
                tempB =tempB->next;
            }

        }
        else if(countB>countA)
        {
            int diff = countB-countA;
            while(diff--)
            {
                tempB=tempB->next;
            }
            while(tempA != NULL && tempB != NULL)
            {

                if(tempA == tempB && tempA->next==tempB->next)
                return tempA;

                tempA =tempA->next;
                tempB =tempB->next;
            }

            
        }

        return NULL;
    }
};