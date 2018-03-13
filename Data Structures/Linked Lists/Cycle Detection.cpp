#include <unordered_set>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    unordered_set<Node *> isthere ;
    
    while(head!=NULL){
        
        if(isthere.find(head)!=isthere.end())
            return 1 ;
        
        isthere.insert(head) ;
        head = head->next ;
    }
    
    return 0 ;
}
