#include "iostream"
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    cout << "����������������" << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {

            throw "��������Ϊ 0";
        }

        cout << "a/b=" << a / b << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }
}