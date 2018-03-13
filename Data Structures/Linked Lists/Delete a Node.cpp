/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
   Node* node1 = head;
   if(position == 0) 
       head = head->next;
   int i = 0;
    while(i<(position-1)){
        node1 = node1->next;
        i++;
    }
    node1->next = node1->next->next;
    
    return head;
}
