#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p[5]={0};
    for (int i=0;i<5;i++)
    {p[i]=&a[i];

        
    }
    for(int **pp=p;pp<p+5;pp++)
    {
        cout<<**pp<<endl;
        cout<<*pp<<endl;
    }
}