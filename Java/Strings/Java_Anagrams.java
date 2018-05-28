   static boolean isAnagram(String a, String b) {
        // Complete the function
        
        a = a.toLowerCase();
        b = b.toLowerCase();
        
        // elegxos mh-egkyrwn eisodwn
        if((a==null || a.equals("")) || (b==null || b.equals("")))
                throw new IllegalArgumentException();
        
        // elegxos mhkous twn string, an diaforetika tote den einai anagram
        if(a.length()!=b.length())
            return false ;
        
        // dhmiourgia enos Map me ta grammata tou string b kai tis syxnothtes twn
        Map<Character, Integer> map = new HashMap<>();

        for (int i = 0; i < b.length(); i++){
            char gr = b.charAt(i);    
            // an den yparxei to gramma to prosthetw
            if( ! map.containsKey(gr)){
                map.put( gr, 1 );
            // alliws tou ayksanw th syxnothta
            }else {
                Integer syxno = map.get(gr);
                syxno++;
                map.put( gr, syxno);
            }
        }
        
        // elegxos twn grammatwn tou string a se sxesh me to Map tou b
        for(int i=0; i<a.length(); i++){
            char gr = a.charAt(i);
            
            if(map.containsKey(gr)==false)
                return false;
            Integer syxno = map.get(gr);
            if(syxno == 0)
                return false;
            else{
                syxno-- ;
                map.put( gr, syxno);
            }
        }        
        
        return true;
        
    }
