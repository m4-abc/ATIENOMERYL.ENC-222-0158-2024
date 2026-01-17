//practical5
#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

bool isGreater(const Fraction &a, const Fraction &b) {
    return (a.numerator * b.denominator) > (b.numerator * a.denominator);
}

Fraction& largestFraction(Fraction &f1, Fraction &f2, Fraction &f3) {
    if (isGreater(f1, f2) && isGreater(f1, f3))
        return f1;
    else if (isGreater(f2, f3))
        return f2;
    else
        return f3;
}

int main() {
    Fraction *f1 = new Fraction{1, 2};
    Fraction *f2 = new Fraction{3, 4};
    Fraction *f3 = new Fraction{2, 3};

    Fraction &largest = largestFraction(*f1, *f2, *f3);

    cout << "Largest Fraction: "
         << largest.numerator << "/"
         << largest.denominator << endl;

    delete f1;
    delete f2;
    delete f3;

    return 0;
}

