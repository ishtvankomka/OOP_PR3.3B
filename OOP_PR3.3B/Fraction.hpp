#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"Pair.hpp"
using namespace std;

class Fraction : public Pair
{
public:
    Fraction();
    Fraction(int, int);
    Fraction(Fraction&);
    Fraction& operator = (const Fraction&);
    
    operator string() const;
    friend ostream& operator << (ostream&, const Fraction&);
    friend istream& operator >> (istream&, Fraction&);
    
    friend Fraction operator + (Fraction&, Fraction&);
    friend Fraction operator * (Fraction&, Fraction&);
    
    friend void Read(Fraction&);
    friend void Display(Fraction&);
    
    friend Fraction toFraction(double);
    friend double convertToDouble(Fraction&);
    friend double toNumber(string);
};
