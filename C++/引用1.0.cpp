#include"iostream"
using namespace std;
int main()
{
    int a = 1;
    int &r_a = a;
    cout << "&a="<<&a<<endl;
    cout << "&r_a="<<&r_a<<endl;
    r_a = 2;//�����ø�ֵ
    cout << "a="<<a<<endl;
    cout << "r_a="<<r_a<<endl;
    a = 3;//�ñ�����ֵ
    cout << "a="<<a<<endl;
    cout << "r_a="<<r_a<<endl;
    int c = 4;
    r_a = c;
    cout << "a="<<a<<endl;
    cout << "r_a="<<r_a<<endl;//�Ǹı��� a ��ֵ�����Ǹı����õ�ָ��
    cout<<"&c="<<&c<<endl;

}