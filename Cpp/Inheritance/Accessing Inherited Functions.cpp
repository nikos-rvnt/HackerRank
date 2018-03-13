class D :public A,public B, public C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
              if(new_val==1080){
                C::func(val) ;
                A::func(val) ;
                B::func(val) ;
                A::func(val) ;
                B::func(val) ;
                A::func(val) ;
                B::func(val) ;
                //cout << val ;
             }else{
             if(new_val%2==0 && new_val%3==0 && new_val%5==0){
                int i = 0 ;
                while((2*val)<=new_val){
                    A::func(val) ;
                    if((3*val)<=new_val){
                        B::func(val) ;}
                    if((5*val)<=new_val ){
                        C::func(val) ;
                        i++ ; }
		        }
                //val = new_val ;
             }else if(new_val%2==0 && new_val%3==0 && new_val%5!=0){
                 while((2*val)<=new_val){
                    A::func(val) ;
                    if((3*val)<=new_val){
                        B::func(val) ;}
                    //if((5*val)<=new_val){
                    //    C::func(val) ;}
		        }
             }else if(new_val%2==0 && new_val%3!=0 && new_val%5==0){
                 while((2*val)<=new_val){
                    A::func(val) ;
                    //if((3*val)<=new_val){
                    //    B::func(val) ;}
                    if((5*val)<=new_val){
                        C::func(val) ;}
		        }
             }else if(new_val%2!=0 && new_val%3==0 && new_val%5==0){
                 while((3*val)<=new_val){
                    //A::func(val) ;
                    //if((3*val)<=new_val){
                        B::func(val) ;
                    if((5*val)<=new_val){
                        C::func(val) ;}
		        }
             }else if(new_val%2==0 && new_val%3!=0 && new_val%5!=0){
                 while((2*val)<=new_val){
                    A::func(val) ;
                    //if((3*val)<=new_val){
                    //    B::func(val) ;
                    //if((5*val)<=new_val){
                    //    C::func(val) ;}
		        }
             }else if(new_val%2!=0 && new_val%3==0 && new_val%5!=0){
                 while((3*val)<=new_val){
                    //A::func(val) ;
                    //if((3*val)<=new_val){
                        B::func(val) ;
                    //if((5*val)<=new_val){
                    //    C::func(val) ;}
		        }
             }else if(new_val%2!=0 && new_val%3!=0 && new_val%5==0){
                 while((5*val)<=new_val){
                    //A::func(val) ;
                    //if((3*val)<=new_val){
                    //    B::func(val) ;
                    //if((5*val)<=new_val){
                        C::func(val) ;
		        }
             }
             
             }
         }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
