#include <print>

class Wektor2D
{

    // Tutaj napisz implementacje klasy Wektor2D
    public:
    Wektor2D() { x=0; y=0;
   std::println("Początek wektora: [{},{}]",x,y); 
   } 

    Wektor2D(double a, double b){ x=a; y=b;
   std::println("Początek wektora: [{},{}]",x,y); 
   }
    
     ~Wektor2D(){std::println("Koniec wektora [{},{}]",x,y);
}

     void setX(double a) { x=a; }
    void setY(double b) { y=b; }
    double getX() const { return x; }
    double getY() const { return y; }

    double    x;
    double   y;

};

Wektor2D operator+( const Wektor2D& c, const Wektor2D& d)
{
    return Wektor2D(c.getX()+d.getX(),c.getY()+d.getY());
}

double operator*( const Wektor2D& e, const Wektor2D& f)
{
    return e.getX()*f.getX() + e.getY()*f.getY();
}