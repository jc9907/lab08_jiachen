#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if ( head != NULL )
        return head->data + recursiveSum(head->next);
    else
        return 0;
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
    int num = head->data;
    int p;

    if (head->next == NULL) {
        return num;
    } else {
        p = recursiveLargestValue(head->next);
    }
    //Return the highest value between this node and the end of the list
    if (num > p) {
        return num;
    } else {
        return p;
    }
}
