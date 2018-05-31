// Write your MyBook class here
class MyBook : public Book{
    protected: 
        int pri ;
    public:
        MyBook( string title, string author, int pric) : Book( title, author){
            this->pri = pric ;
        }
        void display(){
            
            cout << "Title: " << title ;
            cout << endl << "Author: " << author ;
            cout << endl << "Price: " << pri ;
            
        }
};
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
// End class
