          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node* p1 = head ;   
            
              /*if(head->next->data==head->data){
                //head->next = p1->next  ;
            
                // Copy the data of next node to head 
                head->data = head->next->data;
 
                // store address of next node
                p1 = head->next;
 
                // Remove the link of next node
                head->next = head->next->next;  
            
                delete p1 ;
            }*/while (p1 && p1->next) {
                while (p1->next && p1->data == p1->next->data) {
                    p1->next = p1->next->next ;
                }
                p1 = p1->next ;
            }
              
            return head ;
              
          }
