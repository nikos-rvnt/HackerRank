/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
    // Do not write the main method.
    Node *temp21 = new Node() ;
    temp21->data = data ;
    if(head==NULL){
        Node *temp21 = new Node() ;
        //temp21->prev = NULL ;
        //temp21->next = NULL ;
        temp21->data = data ;
        //head = temp21 ;
        return temp21 ;
    }
    else if(head->data>data){
        //Node *temp21 = new Node() ;
        temp21->next = head ;
        //temp21->next = NULL ;
        //temp21->prev = head ;
        head->prev = temp21 ;
        return temp21 ;        
    }
    else{
        Node *current = head ;
        Node *previous = NULL ;
        while(current!=NULL && (current->data)<data){
            previous = current ;
            current = current->next ;
        }
        
        //Node *temp21 = new Node();
        //temp21->data = data ;
        if (current == NULL) { // insert at end of list
            previous->next = temp21 ;
            temp21->prev = previous ;
        } else { // insert in empty list
            previous->next = temp21 ;
            current->prev = temp21 ;
            temp21->prev = previous ;
            temp21->next = current ;
        }
    
        return head ;
    }
}
