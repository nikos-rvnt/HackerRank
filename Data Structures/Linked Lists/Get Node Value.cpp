/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* main_ptr = head;
    Node* ref_ptr = head;
    
    int count = 0;
    //if(head!=NULL){
        while(count < positionFromTail){
            if(ref_ptr==NULL){
                //return;
            }
            ref_ptr = ref_ptr->next;
            count++;
        }
        while(ref_ptr->next!=NULL){
            ref_ptr = ref_ptr->next;
            main_ptr = main_ptr->next;
        }
        return main_ptr->data;
    //}
    return head->data;

}
