		int getHeight(Node* root){
          //Write your code here
            if ( !root ) { 
                return -1 ;
            }
            int right_ipsos = getHeight(root->right) ;
            int left_ipsos = getHeight(root->left) ;
            
            if (right_ipsos > left_ipsos) { 
                return (right_ipsos+1) ; 
            }
            else {
                return (left_ipsos+1) ;
            }
        }
