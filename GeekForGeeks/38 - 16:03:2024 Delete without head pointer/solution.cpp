#include <vector>
#include <iostream>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;



class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       Node *temp = del_node->next;
       del_node->data = del_node->next->data;
       del_node->next = del_node->next->next;
       delete temp;
    }

};