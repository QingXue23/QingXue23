#include "iostream"
using namespace std;
class A
{
public:
    /**
     * @brief ���캯������ʼ���� A �ĳ�Ա���� m_i��
     * @param i ���ڳ�ʼ�� m_i ������ֵ��
     */
    A(int i) : m_i(i) {}
    void print() const
    {
        cout << m_i << endl;
    }
void setvalue()
{
    m_i = 100;
}

private : int m_i;
};
int main()
{
    A a(10);
    const A &r_a = a;
    a.print();
    r_a.print();
    a.setvalue();
   // r_a.setvalue();error
 const int b = 10;
 const int &r_b = b;
//r_b = 20;error
// r_b = 20; // This line should be commented out or removed because you cannot modify a const reference
    return 0;
}