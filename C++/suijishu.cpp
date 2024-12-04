#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
     int a=rand()%8+1;
     cout<<a<<endl;
     return 0;
}
