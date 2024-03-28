#include <iostream>
#include "Product.h"

using namespace std;

int main()
{
    Product k;
    cin >> k;
    cout << k;
    cout << k.Power() << endl;

    int a;
    double b;
    cout << "first = ";
    cin >> a;
    cout << "second = ";
    cin >> b;
    Product p(a, b);
    cout << p.Power() << endl;

    Product d(2, 2);
    cout << d;
    d++;
    --d;
    cout << d;

    return 0;
};
