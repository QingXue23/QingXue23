#include"iostream"
using namespace std;
int main()
{
    int a = 1;
    int &r_a = a;
    cout << "&a="<<&a<<endl;
    cout << "&r_a="<<&r_a<<endl;
    r_a = 2;//用引用赋值
    cout << "a="<<a<<endl;
    cout << "r_a="<<r_a<<endl;
    a = 3;//用变量赋值
    cout << "a="<<a<<endl;
    cout << "r_a="<<r_a<<endl;
    int c = 4;
    r_a = c;
    cout << "a="<<a<<endl;
    cout << "r_a="<<r_a<<endl;//是改变了 a 的值而不是改变引用的指向
    cout<<"&c="<<&c<<endl;

}