#include <vector>
#include <iostream>
using namespace std;


// Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        
        Node* ptr1 = head1;
        Node* ptr2 = head2;
        
        int count = 0;
        
        unordered_map<int,int> freqMap;
        
        while (ptr1){
            freqMap[ptr1->data]++;
            ptr1 = ptr1->next;
        }
        
        while(ptr2){
            if (freqMap.find(x - ptr2->data) != freqMap.end()){
                count++;
            }
            ptr2 = ptr2->next;
        }
        
        // while (ptr1){
        //     Node* ptr2 = head2;
            
        //     while (ptr2){
        //         if (ptr2 -> data + ptr1->data == x){
        //             count++;
        //             break;
        //         }
        //         ptr2 = ptr2 -> next;
        //     }
            
        //     ptr1 = ptr1 -> next;
        // }
        
        return count;
    }
};