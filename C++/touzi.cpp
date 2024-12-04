#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
double a1=0;
double a2=0;
double a3=0;
double a4=0;
double a5=0;
double a6=0;
int main()
{
    srand(time(NULL));
    for(int i=0;i<10000;i++)
{
 int a=rand()%6+1;
 switch(a)
 {
    case 1:
    a1++; 
    break;
    case 2:
    a2++;
    break;
    case 3:
    a3++;
    break;
    case 4:
    a4++;
    break;
    case 5:
    a5++;
    break;
    case 6:
    a6++;
    break; 
  }
}
cout<<"1 出现的概率为"<<a1/10000<<endl;
cout<<"2 出现的概率为"<<a2/10000<<endl;
cout<<"3 出现的概率为"<<a3/10000<<endl;
cout<<"4 出现的概率为"<<a4/10000<<endl;
cout<<"5 出现的概率为"<<a5/10000<<endl;
cout<<"6 出现的概率为"<<a6/10000<<endl;
}