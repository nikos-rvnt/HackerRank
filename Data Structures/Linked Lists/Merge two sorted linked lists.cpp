/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    /*Node* temp1 = headA;
    Node* temp2 = headB;
    
    if(headA == NULL && headB == NULL)
        return NULL;
    else if(headA==NULL)
        return headB;
    else if(headB==NULL)
        return headA;
    */
        
   if (headA == NULL || headB == NULL) {	
        return (headA == NULL) ? headB : headA ;		
    }	
    if (headA->data < headB->data) {	
        headA->next = MergeLists(headA->next, headB) ;			
        return headA ;	
    }	
    headB->next = MergeLists(headB->next, headA) ;		
    return headB ;
    
}
