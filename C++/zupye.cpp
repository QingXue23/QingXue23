#include <iostream>
using namespace std;
void jingyesi()
{
    cout <<"静夜思"<<endl;
    cout <<"床前明月光"<<endl;
    cout <<"疑是地上霜"<<endl;
    cout <<"举头望明月"<<endl;
    cout <<"低头思故乡"<<endl;


}
void chunxiao()
{
    cout <<"春晓"<<endl;
    cout <<"春眠不觉晓"<<endl;
    cout <<"处处闻啼鸟"<<endl;
    cout <<"夜来风雨声"<<endl;
    cout <<"花落知多少"<<endl;
}
int main()
{
    int a=0;
    cout <<"请输入 1 静夜思 2 春晓"<<endl;
    cin>>a;
    if (a== 1)
    {
        jingyesi();
    }
    else if (a==2)
    {
        chunxiao();
        }
        return 0;
}        
        
