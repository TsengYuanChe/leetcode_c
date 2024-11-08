/*
 * @lc app=leetcode id=21 lang=c
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode x;
    struct ListNode* tail = &x;
    x.next = NULL;
    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    return x.next;
}
// @lc code=end

