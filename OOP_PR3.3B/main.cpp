#include <iostream>
#include <stddef.h>
#include <stdio.h>
#include "Pair.hpp"
#include "Fraction.hpp"
using namespace std;

int main() {

    Fraction n1;
    Read(n1);
    cout << "The number is ";
    Display(n1);
    
    Fraction n2(0, 0);
    Read(n2);
    cout << "The number is ";
    Display(n2);
    
    Fraction nsum;
    nsum = n1 + n2;
    cout << " Sum: ";
    Display(nsum);

    Fraction nmultiplication;
    nmultiplication = n1 * n2;
    cout << " Multiplication: ";
    Display(nmultiplication);
    if (n1 > n2)
    {
        cout << " n1 > n2" << endl;
    }
    return 0;
}

