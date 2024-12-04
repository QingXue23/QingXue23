#include<iostream>
using namespace std;
int main()
{
    cout <<"请输入一个正整数";
    int a = 0;
    int c =0;
    cin >> a;
    //之后需要对 a 用 10 进行取余然后用 c 来收集并将 a 除以 10
    while (a !=0)
    {int b = a%10;
      c =c*10 + b;
      a = a/10;}
    cout << c;
    return 0;

}//至此将正整数逆序输出的代码完毕