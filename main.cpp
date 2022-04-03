#include <iostream>
#include <Rational.h>

using namespace std;

int main()
{
    Rational quarter(1, 4);
    Rational one_third(1, 3);
    Rational one(1);

    Rational add_result, sub_result, mul_result;
    add_result = one + quarter;
    sub_result = one_third - quarter;
    mul_result = one_third * quarter;

    one.print(); std::cout << " + "; quarter.print(); std::cout << " = "; add_result.print(); std::cout << std::endl;
    one_third.print(); std::cout << " - "; quarter.print(); std::cout << " = "; sub_result.print(); std::cout << std::endl;
    one_third.print(); std::cout << " * "; quarter.print(); std::cout << " + "; mul_result.print(); std::cout << std::endl;
    Rational r1,r2,r3;
    std::cin>> r1 >> r2;
     r3=r1+r2;
     std::cout << r3 << std::endl;
    // Rational p = quarter + 1;
    Rational p = one_third / quarter;

     std::cout << p << std::endl;


}
