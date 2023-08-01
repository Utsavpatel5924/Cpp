#include <iostream>
using namespace std;
class solid
{
public:
    void volume(int r)
    {
        cout << "volume of sphere:" << (4 * 3.14 * r * r * r) / 3 << endl;
    }
    void volume(double b, double h)
    {
        cout << "volume of pyramid:" << (4 * b * h) / 3 << endl;
    }
    void volume(int r, int h)
    {
        cout << "volume of cylinder:" << 3.14 * r * r * h << endl;
    }
    void volume(double l)
    {
        cout << "volume of cube:" << (l * l * l) / 3 << endl;
    }
};
int main()
{
    solid a;
    a.volume(3);
    a.volume(2.5,3.7);
    a.volume(3,5);
    a.volume(3.0);
}