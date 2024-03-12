#include <iostream>
#include <vector>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            // No cycle if the list is empty or has only one node
            return false;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {
                // If fast reaches the end, there is no cycle
                return false;
            }

            slow = slow->next;
            fast = fast->next->next;
        }

        // If the pointers meet, there is a cycle
        return true;
    }

};