#include<iostream>
using namespace std;
int main()
{
    cout << "������5������"<<endl;
    int a[5]={0};
     
     int sum = 0 ;
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
    
    sum +=a[i];}//���
    int  min = a[0];
    int max = a[0];
    for( int j=0;j<5;j++)
    {
     
    if (a[j]>max)
    {
        max=a[j];
    }
    if (a[j]<min)
    {
        min =a[j];
    }
    }
    cout <<"sum="<<sum<<endl;
    cout <<"max="<<max<<endl;
    cout <<"min="<<min<<endl;
    return 0;
}
