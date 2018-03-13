/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    protected: 
        int width ;
        int height ;
    public:
        void display(){
            cout << width << " " << height << endl ;
        }
};

class RectangleArea : public Rectangle {
    public:
        void read_input(){
            int wid, hei ;
            cin >> wid >> hei ;
            width = wid ;
            height = hei ;
        }
        void display(){
            cout << width*height ;
        }
        
    
};
