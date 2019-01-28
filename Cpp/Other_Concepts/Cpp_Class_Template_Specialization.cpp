// Define specializations for the Traits class template here.
template <typename T> 
struct Traits{
      static string name(int i){
          if(i==0){
              if(typeid(T)==typeid(Fruit))
                  return "apple" ;
              else
                  return "red" ;             
          }else if(i==1){
              if(typeid(T)==typeid(Fruit))
                  return "orange" ;
              else
                  return "green" ;                
          }else if(i==2){
              if(typeid(T)==typeid(Fruit))
                  return "pear" ;
              else
                  return "orange" ;
          }else
              return "unknown" ;          
      }    
};
