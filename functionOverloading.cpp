#include <iostream>
using namespace std;

class Calulation
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Calulation c1;
    cout << c1.add(1, 2)<<"\n";
    cout << c1.add(1.1f, 9.9f)<<"\n";
    cout << c1.add(1, 2, 3)<<"\n";

    return 0;
}