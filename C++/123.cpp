#include <iostream>
using namespace std;
int main()
{double a=1.1 ;
double b=1.1 ;
double c=1.1 ;
cout<<"请输入三角形的三条边长";
cin >> a  >> b >> c;
double s = (a+b+c)/2;

cout<<"三角形的面积的平方是" <<s * (s - a) * (s - b) * (s - c)<< endl;
return 0;}
