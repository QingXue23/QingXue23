#include<iostream>
using namespace std;
int main()
{
    cout <<"������һ��������";
    int a = 0;
    int c =0;
    cin >> a;
    //֮����Ҫ�� a �� 10 ����ȡ��Ȼ���� c ���ռ����� a ���� 10
    while (a !=0)
    {int b = a%10;
      c =c*10 + b;
      a = a/10;}
    cout << c;
    return 0;

}//���˽���������������Ĵ������