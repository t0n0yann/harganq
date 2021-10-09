
#include <iostream>
using namespace std;
class Harganq
{
public:
    int pativ;
    int x;
    int y;
    Harganq(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    ~Harganq()
    {
        cout << "finished" << "\n";
    }
    void mecaranq()
    {
        for (; this->x <= this->y; this->x++)
        {
            cout << pow(x, 2) << "\n";
        }
        if (this->y % 2 == 0)
        {
            this->pativ = pow(this->y, 2);
        }
        else
        {
            this->pativ = pow(this->y - 1, 2);
        }
        cout << this->pativ << "\n";
    }
};
int main()
{
    Harganq oop(1, 5);
    oop.mecaranq();
}

