#include "iostream"
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    cout << "请输入两个整数：" << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {

            throw "除数不能为 0";
        }

        cout << "a/b=" << a / b << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }
}