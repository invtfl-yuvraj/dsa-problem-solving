#include <vector>
#include <iostream>
using namespace std;

  struct ListNode {
         int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
       ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = dummy;
    int prefix_sum = 0;
    std::unordered_map<int, ListNode*> seen;

    while (current) {
        prefix_sum += current->val;
        if (seen.find(prefix_sum) != seen.end()) {
            ListNode* start = seen[prefix_sum]->next;
            int sum = prefix_sum + start->val;
            while (sum != prefix_sum) {
                seen.erase(sum);
                start = start->next;
                sum += start->val;
            }
            seen[prefix_sum]->next = current->next;
            return removeZeroSumSublists(dummy->next);
        } else {
            seen[prefix_sum] = current;
        }
        current = current->next;
    }

    return dummy->next;
    }
};