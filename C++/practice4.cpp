#include <iostream>
using namespace std;
int main(){
int a = 0;
cout << "������һ��������" << endl;
cin >> a;
int b =0;
int c;
while(a>0)
{ c=a%10;
b=b*10+c;
a/=10;}
cout << b;
return 0;}