#include "Product.h"

using namespace std;

Product::Product() {
    first = 0;
    second = 0;
};

Product::Product(unsigned int first, double second)
{
    this->first = first;
    this->second = second;
}

Product::Product(const Product& p)
{
    first = p.first;
    second = p.second;
}

void Product::SetFirst(unsigned int value)
{
    first = value;
}

void Product::SetSecond(double value)
{
    second = value;
}

ostream& operator<<(ostream& out, const Product& p)
{
    // Output 'first' and 'second'
    out << "First: " << p.first << ", Second: " << p.second << endl;
    return out;
}

istream& operator >> (istream& in, Product& r)
{
    cout << " First = "; in >> r.first;
    cout << " Second = "; in >> r.second;
    cout << endl;
    return in;
}

double Product::Power()
{
    return second * first * 10;
}

Product& Product::operator++()
{
    first++;
    return *this;
}

Product& Product::operator--()
{
    first--;
    return *this;
}

Product Product::operator--(int)
{
    Product copy = *this;
    --second;
    return copy;
}

Product Product::operator++(int)
{
    Product copy = *this;
    ++second;
    return copy;
}

