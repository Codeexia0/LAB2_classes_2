#include <iostream>
class Rational {
public:
    Rational(int num = 0, int den = 1 ); // default constructor

    void set(int num, int den); // sets numeratoe and denominator
    int num() const; // gets numerator
    int den() const; // gets denominator
    void set_num(int num); // sets numerator
    void set_den(int den); // sets denominator
    Rational operator+(const Rational &rhs) const; // adds second rational number, returns result
    Rational operator-(const Rational &rhs) const; // substracts second rational number, returns result
    Rational operator*(const Rational &rhs) const;
    void print() const; // prints number to console
    Rational(double r); // the constructor converting from double
    operator double(); // operator convering to double

private:
    int num_, den_;
    friend std::ostream &operator<<(std::ostream &str, Rational &rhs);
    friend std::istream &operator>>(std::istream &str, Rational &rhs);
};
