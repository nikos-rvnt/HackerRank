// Write your Student class here
class Student{
    private:
        vector<int> scores ;
    public:
        void input(){
            int temp ;
            for(int i=0; i<5; i++){
                cin >> temp ;
                scores.push_back(temp) ;
            }
        }
        int calculateTotalScore(){
            int sum = 0 ;
            for(int i=0; i<5; i++){
                sum = sum + scores[i] ;
            }
            return sum ;
        }
};
