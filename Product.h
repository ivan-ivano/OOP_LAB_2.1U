#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Product
{

private:
    unsigned int first;
    double second;

public:
    unsigned int getFirst() const { return first; }
    double getSecond() const { return second; }

    Product();
    Product(unsigned int first, double second);
    Product(const Product& p);
    void SetFirst(unsigned int value);
    void SetSecond(double value);

    friend istream& operator>>(istream& in, Product& r);
    friend ostream& operator<<(ostream& out, const Product& r);

    double Power();

    Product& operator++();
    Product& operator--();
    Product operator++(int);
    Product operator--(int);

};

