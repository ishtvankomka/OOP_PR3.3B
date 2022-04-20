#include "Fraction.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction::Fraction() {
    set_first(0);
    set_second(0);
}

Fraction::Fraction(int f, int s) {
    set_first(f);
    set_second(s);
}

Fraction::Fraction(Fraction& a) {
    set_first(a.get_first());
    set_second(a.get_second());
}

Fraction& Fraction::operator = (const Fraction& a){
    set_first(a.get_first());
    set_second(a.get_second());
    return *this;
}

istream& operator >> (istream& in, Fraction& a)
{
    long int f;
    unsigned short int s;
    cout << " Set the integer "; in >> f;
    cout << " Set the fraction "; in >> s;
    a.set_first(f);
    a.set_second(s);
    return in;
}

ostream& operator << (ostream& out, const Fraction& a)
{
    out << string(a);
    return out;
}

Fraction::operator string () const
{
    stringstream a;
    a << get_first() << "." << get_second() << endl;
    return a.str();
}

void Read(Fraction& a)
{
    cout << "Set the number:" << endl; cin >> a;
}

void Display(Fraction& a)
{
    cout << a;
}

double toNumber(string str)
{
    double number;
    istringstream ( str ) >> number;
    return number;
}

double convertToDouble(Fraction& a)
{
    return toNumber(string(a));
}

Fraction toFraction(double n)
{
    stringstream s;
    s << n;
    string str = s.str();
    string integer_a = strtok(str.data(), ".");
    string fraction_a = strtok(0, "");

    Fraction nn;
    long int integer_b;
    istringstream ( integer_a ) >> integer_b;
    nn.set_first(integer_b);
    
    unsigned short int fraction_b;
    istringstream ( fraction_a ) >> fraction_b;
    nn.set_second(fraction_b);
    
    return nn;
}

Fraction operator + (Fraction& a, Fraction& b)
{
    double sum =  convertToDouble(a) + convertToDouble(b);
    return toFraction(sum);
}

Fraction operator * (Fraction& a, Fraction& b)
{
    double sum =  convertToDouble(a) * convertToDouble(b);
    return toFraction(sum);
}
