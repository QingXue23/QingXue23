#include "iostream"
using namespace std;
class A
{
public:
    A(int i) : m_i(i) {}
    void print()
    {
        cout << m_i << endl;
    }

private:
    int m_i;
};
int main()
{
    A a(10);
    A &r_a=a;
    a.print();
    r_a.print();
    return 0;
}


