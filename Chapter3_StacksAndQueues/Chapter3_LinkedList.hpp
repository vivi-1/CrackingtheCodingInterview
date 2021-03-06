#ifndef CHAPTER3_LINKEDLIST_HPP
#define CHAPTER3_LINKEDLIST_HPP
#include <iostream>
using namespace std;
struct Node {
  friend class Queue;
   string data;
   struct Node *next;
   Node(string i = " ");
};

class LinkedList{
public:
  LinkedList() = default;
  struct Node* head = NULL;
  void insert(string new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
    free(new_node);
  }

  void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
      }
  }
};

#endif //CHAPTER3_LINKEDLIST_HPP
