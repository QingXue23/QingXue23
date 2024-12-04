#include<iostream>
using namespace std;
int main()
{
    int a=0;
    cout<<"请输入一个正整数"<<endl;
    cin>>a;
    int c=a;
    cout<<a<<" = 1";
    for(int i=2;i<=a;)
    {
        if(a%i==0)
        {
            cout<<'*'<<i;
            a=a/i;
            i=2;
        }
        else
        {
            i++;
           
        }
    }
   if(a==c)
   {
    cout<<'*'<<c;
   } 
}