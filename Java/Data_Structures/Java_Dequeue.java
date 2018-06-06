    import java.util.*;
    public class test {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            Deque deque = new ArrayDeque<>();
            int n = in.nextInt();
            int m = in.nextInt();

            Deque<Integer> deq = new ArrayDeque<Integer>();
            Set<Integer> ste = new HashSet<Integer>(); 
            int phonique = 0;
            int how_many, temp, temp2 ;
            
            for (int i = 0; i < n; i++) {
                
                int num = in.nextInt();
                deq.add(num);
                ste.add(num);
                if(deq.size()==m){
                    
                    if(ste.size()==m){
                        phonique = ste.size();
                        break;
                    }
                    
                    how_many = ste.size();          
                    
                    if(how_many > phonique){
                        phonique = how_many ;
                    }
                    
                    int out = deq.remove();
                    if (!deq.contains(out)) ste.remove(out);
                }                
            }
            
            System.out.println(phonique);
            
        }
    }

