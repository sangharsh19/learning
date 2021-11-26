#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setData(int x, int y)
    {

        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << "," << b << endl;
    }

    complex mul(complex c)
    {
        complex temp;
        temp.a = a * c.a;
        temp.b = b * c.b;
        return (temp);
    }

    /* complex operator*(complex c)
    {
        complex temp;
        temp.a = a * c.a;
        temp.b = b * c.b;
        return (temp);
        } */
};

int main()
{
    complex c1;
    complex c2;

    c1.setData(3, 4);
    c1.showData();

    c2.setData(5, 6);
    c2.showData();

    complex c3;

    c3 = c1.mul(c2);
    //c3 = c1 * c2;
    c3.showData();

    return 0;
}