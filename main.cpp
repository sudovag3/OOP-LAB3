#include <iostream>
#include "fraction.h"
#include "classref.h"


int main() {
    Fraction f1(210, 315), f2(2, 5);
    Fraction f3 = f1 + f2;
    Fraction f4 = f1 - f2;
    Fraction f5 = f1 * f2;
    Fraction f6 = f1 / f2;

    cout << f2 << endl; 
    cout << f1 << endl; 
    cout << f3 << endl; 
    cout << f4 << endl; 
    cout << f5 << endl; 
    cout << f6 << endl; 

    int gcd_f1 = f1.gcd();
    cout << "GCD of " << f1 << " is " << gcd_f1 << endl;

    // int* room = new int[12];
    // std::cout << *room << std::endl;
    // ClassRef newClass(*room);

    // std::cout << newClass.getRef() << std::endl;
    
    // ClassRef anotherClass = newClass;

    // std::cout << anotherClass.getRef() << std::endl;




    return 0;
}