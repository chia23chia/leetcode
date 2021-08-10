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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ans = new ListNode() ;
        ListNode* tmp = list1 ; 
        for(int i = 0 ; i < b ; i++)
        {
            if(i == a-1)
                ans = tmp ;
            tmp = tmp->next ;
        }
        ans->next = list2 ;
        while(list2->next != nullptr)
        {
            list2 = list2->next ;
        }
        list2->next = tmp->next ;
        return list1 ;
    }
};
