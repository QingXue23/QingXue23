#include"iostream"
using namespace std;
template<typename T>
T add(T a, T b)//T ��ͨ�����ͣ������� int��double��float ��
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