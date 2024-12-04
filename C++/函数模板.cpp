#include"iostream"
using namespace std;
template<typename T>
T add(T a, T b)//T 是通用类型，可以是 int、double、float 等
{
    return a + b;
}
int main()
{
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
        cout << add(1, 2.2) << endl;
    return 0;
}