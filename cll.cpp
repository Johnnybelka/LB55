#include <iostream>
#include "Complex.h"
#include "Vector.h"
#include <math.h>

using namespace std;



Complex::Complex()
{
    re = 0;
    im = 0;
}

Complex::Complex(const Complex &obj)
{
    re = obj.re;
    im = obj.im;
}


void Complex::output()
{
    cout << "Число: (" << re << " + (" << im << ")i)" << endl;
    cout << "Целая часть: " << re << endl;
    cout << "Мнимая: " << im << endl;
}

Complex Complex::operator=(Complex str2)
{
    im = str2.im;
    re = str2.re;
    return *this;
}


Complex Complex::operator++(int notused)
{
    Complex temp = *this;
    im++;
    re++;
    return temp;
}


Complex Complex::operator--(int notused)
{
    Complex temp = *this;
    im--;
    re--;
    return temp;
}

int Complex::operator>(Complex str2)
{
    if (sqrt(re * re + im * im) > sqrt(str2.re * str2.re + str2.im * str2.im))
        return 1;
    return 0;
}

int Complex::operator<(Complex str2)
{
    if (sqrt(re * re + im * im) < sqrt(str2.re * str2.re + str2.im * str2.im))
        return 1;
    return 0;
}



int Complex::operator==(Complex str2)
{
    if (sqrt(re * re + im * im) == sqrt(str2.re * str2.re + str2.im * str2.im))
        return 1;
    return 0;
}

ostream& operator<< (ostream& out, const Complex& num)
{
    out << num.re << " + (" << num.im << ")i" << endl;
    return out;
}

istream& operator>> (istream& in, Complex& num)
{
    cout << "Re: ";
    in >> num.re;
    cout << "Im: ";
    in >> num.im;
    return in;
}



Complex::~Complex(){}



Vector::Vector()
{
    x = 0;
    y = 0;
}


Vector::Vector(const Vector &obj)
{
    x = obj.x;
    y = obj.y;
}


Vector Vector::operator=(Vector str2)
{
    x = str2.x;
    y = str2.y;
    return *this;
}

int Vector::operator>(Vector str2)
{
    if (sqrt(x * x + y * y) > sqrt(str2.x * str2.x + str2.y * str2.y))
        return 1;
    return 0;
}

int Vector::operator<(Vector str2)
{
    if (sqrt(x * x + y * y) < sqrt(str2.x * str2.x + str2.y * str2.y))
        return 1;
    return 0;
}


int Vector::operator==(Vector str2)
{
    if (sqrt(x * x + y * y) == sqrt(str2.x * str2.x + str2.y * str2.y))
        return 1;
    return 0;
}

ostream& operator<< (ostream& out, const Vector& num)
{
    out << "Координата х = "<< num.x << endl << "Координата у = " << num.y << endl;
    return out;
}

istream& operator>> (istream& in, Vector& num)
{
    cout << "x: ";
    in >> num.x;
    cout << "y: ";
    in >> num.y;
    return in;
}


void Vector::output()
{
    cout << "Координата x = " << x << endl;
    cout << "Координата y = " << y << endl;
}

Vector::~Vector(){}
