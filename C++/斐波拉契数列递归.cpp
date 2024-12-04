#include"std_lib_facilities.h"
int shu(int n)
{
    if(n<=2)
    {
;        return 1;
    }
    else
    {
        return shu(n-1)+shu(n-2);
    }
}
int main()
{
    int n=0;
    cout<<"ÇëÊäÈëÏîÊı n"<<endl;
    cin>>n;
    cout<<shu(n);
}