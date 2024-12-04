#include<iostream>
using namespace std;
void shulie(int n )
{
    int n1 = 1;
    int n2 = 1;
    int sum =0; 
for(int i=3;i<=n;i++)
{
sum =n1+n2;
if(i<n)
{
n1 = n2;
n2 =sum;
sum =0;
}
else
cout <<sum;
}
}
int main()
{
    int a=0;
    cout <<"ÇëÊäÈëÏîÊý n"<<endl;
    cin >>a; 
    if (a== 1||a ==2)
    {
        cout<<1;
    }
    else
    {
        shulie(a);
    }

    return 0;
}
