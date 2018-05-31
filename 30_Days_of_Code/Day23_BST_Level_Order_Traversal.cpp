	void levelOrder(Node * root){
      //Write your code here
  	  //levelOrder(BinaryTree t) {
          queue<Node*> clika ;
          if(root!=NULL)
            clika.push(root) ;
        
            // while there are nodes to process
            while( !clika.empty() ) {
                // dequeue next node
                Node* root = clika.front();
                cout << root->data << " " ;
                clika.pop() ; 
            
                // enqueue child elements from next level in order
                if( root->left!=NULL ) {
                    clika.push( root->left ) ;
                }
                if( root->right!=NULL ) {
                    clika.push( root->right ) ;
                }
            }
     }    
