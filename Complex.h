using namespace std;
class Complex
{
    int re;
    int im;
public:
    Complex();
    Complex(int r, int i): re(r), im(i){};
    Complex(const Complex &obj);
    void output();
    Complex operator=(Complex str2);

    Complex operator++(int notused);
    Complex operator--(int notused);

    int operator>(Complex str2);
    int operator<(Complex str2);
    int operator==(Complex str2);

    friend ostream& operator<<(ostream& out, const Complex& num);
    friend istream& operator>>(istream& in, Complex& num);
    ~Complex();
};