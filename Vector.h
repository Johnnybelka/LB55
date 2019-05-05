using namespace std;
class Vector
{
    int x;
    int y;
public:
    Vector();
    Vector(int i, int j): x(i), y(j){};
    Vector(const Vector &obj);
    void output();

    Vector operator=(Vector str2);
    int operator>(Vector str2);
    int operator<(Vector str2);
    int operator==(Vector str2);

    friend ostream & operator<<(ostream & out, const Vector& num);
    friend istream & operator>>(istream & in, Vector& num);
    ~Vector();
};