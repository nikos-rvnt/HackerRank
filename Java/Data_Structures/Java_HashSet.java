     // Write your code here
        HashSet<String> myHasi = new HashSet<String>() ;

        for(int i=0; i<t; i++){
            myHasi.add(pair_left[i]+" "+ pair_right[i]);
            
            System.out.println(myHasi.size());
            //System.out.println((myHleft.size()>myHright.size())?myHleft.size():myHright.size());
        }
        
        /*Iterator<String> itr = myHasi.iterator();  
        while(itr.hasNext()){  
            System.out.println(itr.next());  
        }*/ 
