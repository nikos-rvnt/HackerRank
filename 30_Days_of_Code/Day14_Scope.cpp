	// Add your code here
    Difference(vector<int> elem){
        
        this->elements = elem ;
    }
    void computeDifference(){
        int numDif = 0 ;
        for(int i=(elements.size()-1); i>1; i--)
        {
            numDif = numDif + i ;
        }
        
        vector<int> difs ;     
        for( int j=0; j<elements.size(); j++)
        {
            for( int z=j+1; (z)<elements.size(); z++)
            {
                difs.push_back(abs( elements[j] - elements[z] )) ;
                //cout << difs[j+z] ;
            }            
        }
        maximumDifference = 0 ;
        for(int k=0; k<difs.size(); k++)
        {
            if(difs[k]>maximumDifference)
            {
                maximumDifference = difs[k] ;
            }
        }
    }
