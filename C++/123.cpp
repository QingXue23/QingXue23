#include <iostream>
using namespace std;
int main()
{double a=1.1 ;
double b=1.1 ;
double c=1.1 ;
cout<<"�����������ε������߳�";
cin >> a  >> b >> c;
double s = (a+b+c)/2;

cout<<"�����ε������ƽ����" <<s * (s - a) * (s - b) * (s - c)<< endl;
return 0;}
