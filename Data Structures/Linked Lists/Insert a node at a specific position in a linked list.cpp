/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node* node1 = new Node();
    node1->data = data;
    node1->next = NULL;
    
    Node* temp = head;
    
    if(position==0){
        node1->next = head;
        head = node1;
        return head;
    }
    
    int i = 0;
    while(i<(position-1)){
        i++;
        temp = temp->next;
    }
    node1->next = temp->next;
    temp->next = node1;
        
    return head;
}
