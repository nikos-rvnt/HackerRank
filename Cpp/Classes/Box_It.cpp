class Box{
    private:
        int l ;
        int b ;
        int h ;
    public:
        Box(){
            l = 0 ;
            b = 0 ;
            h = 0 ;
        }
        Box(int le,int br,int he){
            l = le ;
            b = br ;
            h = he ;
        }
        Box(const Box& B){
            l = B.l ;
            h = B.h ;
            b = B.b ;
            
        }
        int getLength(){
            return l ;    
        }
        int getBreadth(){
            return b ;
        }
        int getHeight(){
            return h ;
        }
        long long CalculateVolume(){
            long long vol ;
            vol = (long long)l*(long long)b*(long long)h ;
            return vol ;
        }
        bool operator<(Box& B){
            bool eq ;
            
            if(l<B.l){
                eq = true ;
            }else if((b<B.b) && (l==B.l)){
                eq = true ;
            }else if((h<B.h) && (b==B.b) && (l==B.l)){
                eq = true ;
                
            }else{
                eq = false ;
            }
            return eq ;
        }
        friend ostream& operator<<(ostream& out, const Box& B){
            cout << B.l << " " << B.b << " " << B.h ;
            return out ;
        }
};
