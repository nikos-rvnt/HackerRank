class Matrix{
    private:
    
    public:  
        vector< vector<int> > a ;
        Matrix(){}
        Matrix operator+( Matrix mat2 ){
            Matrix matB ;
            
            for(int i=0; i<mat2.a.size(); i++){
                for(int j=0; j<mat2.a[i].size(); j++){
                    this->a[i][j] = this->a[i][j] + mat2.a[i][j] ;
                }
            }
            matB.a = this->a ;
            return matB ;
        }
    
};
