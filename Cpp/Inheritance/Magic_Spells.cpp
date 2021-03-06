  /* Enter your code here */
    if(SpellJournal::journal==""){
        if(Fireball *fir = dynamic_cast<Fireball*>(spell))
            fir->revealFirepower() ;
        else if(Frostbite *fro = dynamic_cast<Frostbite*>(spell))
            fro->revealFrostpower() ;
        else if(Thunderstorm *thu = dynamic_cast<Thunderstorm*>(spell))
            thu->revealThunderpower() ;
        else if(Waterbolt *wtb = dynamic_cast<Waterbolt*>(spell))
            wtb->revealWaterpower() ;
    }
    else{

        string spellIN = spell->revealScrollName() ;
        string spellJU = SpellJournal::read() ;
        
        int common[spellIN.length()+1][spellJU.length()+1] ;
        for(int s1=0; s1<=spellIN.length(); s1++) common[s1][0] = 0 ;
        for(int s2=0; s2<=spellJU.length(); s2++) common[0][s2] = 0 ;          
      
        for(int s1=1; s1<=spellIN.length(); s1++){
            for(int s2=1; s2<=spellJU.length(); s2++){
                if(spellIN[s1-1]==spellJU[s2-1]){
                    common[s1][s2] = common[s1-1][s2-1]+1 ;
                }
                else{
                    common[s1][s2] = max(common[s1][s2-1],common[s1-1][s2]) ;

                }
                //cout << common[s1][s2] << "&" ;    
            }
        }
        int mi = spellIN.length() ;
        int ni = spellJU.length() ;
        cout << common[mi][ni] << endl ;
        SpellJournal::journal = "" ;
}
