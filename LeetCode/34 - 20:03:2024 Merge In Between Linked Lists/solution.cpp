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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* temp2=list1;
        for(int i=1;i<a;i++){
            temp=temp->next;
        }
        for(int i=0;i<=b;i++){
            temp2=temp2->next;
        }
        ListNode* temp3=list2;
        while(temp3->next!=nullptr){
            temp3=temp3->next;
        }
        temp->next=list2;
        temp3->next=temp2;
        return list1;
        
    }
};