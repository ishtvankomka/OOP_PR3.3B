#include "Pair.hpp"
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<sstream>
#include<iostream>

Pair::Pair()
{
    set_first(0);
    set_second(0);
}

Pair::Pair(long int f, unsigned short int s)
{
    set_first(f);
    set_second(s);
}

Pair::Pair(const Pair& p)
{
    first = p.first;
    second = p.second;
}

Pair& Pair::operator = (const Pair& p)
{
    first = p.first;
    second = p.second;
    return *this;
}

Pair::operator string() const
{
    stringstream a;
    a << get_first() << "," << get_second() << endl;
    return a.str();
}

ostream& operator << (ostream& out, const Pair& p)
{
    out << string(p);
    return out;
}

istream& operator >> (istream& in, Pair& p)
{
    long int a;
    unsigned short int b;
    cout << " First number: "; cin >> a;
    cout << " Second number: "; cin >> b;
    p.set_first(a);
    p.set_second(b);
    return in;
}

bool operator > (const Pair& p1, const Pair p2)
{
    if(p1.get_first() > p2.get_first()
       ||
       (p1.get_first() > p2.get_first() && p1.get_second() > p2.get_second()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
