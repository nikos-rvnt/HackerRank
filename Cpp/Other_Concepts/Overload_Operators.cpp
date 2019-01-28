//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator+( const Complex& c1, const Complex& c2){
    Complex z ;
    z.a = c1.a + c2.a ;
    z.b = c1.b + c2.b ;
    
    return z ;
}

ostream& operator<<( ostream& osObject, const Complex& c3){

    //ostream& osObject ;
    osObject << c3.a << "+i" << c3.b << endl ;
    
    return osObject ;
}
