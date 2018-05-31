      Node* insert(Node * const head,const int data)
      {
          Node * newN = new Node(data);
          Node * oura = head;
          if ( !head ) { return newN ; }
          
          for (;oura->next; oura = oura->next);

          oura->next = newN ;
          
          return head;
}
