#include<iostream>
#include<string>
using namespace std;
int main()
{
    string m;
    cout<<"������ĸ��"<<endl;
    cin>>m;
    string z;
    cout<<"�������Ӵ�"<<endl;
    cin>>z;
    int n=m.length() - z.length() + 1;
    int n2=z.length();
    int a=0;
    for(int i=0;i<n;i++)
    {    string s="";
        for(int j=0;j<n2;j++)
    {
       s+=m[j+i];
    }
           if( s==z)
            {
                a++;
            }
       
    }
    cout<<"�Ӵ���ĸ���г��ֵĴ���Ϊ"<<a<<endl;
}    
