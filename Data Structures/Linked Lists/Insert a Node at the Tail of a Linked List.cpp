/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* node1 = new Node();
    Node* last = head ;
    
    node1->data = data ;
    node1->next = NULL ;
    
    if(head==NULL){
        head = node1;
        //return head;
    }
    else{
        while(last->next!=NULL)
            last = last->next;
     last->next = node1 ;
    }
    return head;
}
