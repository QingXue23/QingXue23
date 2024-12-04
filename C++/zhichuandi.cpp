#include<iostream>
using namespace std;
void transfer(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    transfer(&a,&b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}