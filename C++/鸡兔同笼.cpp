#include <iostream>
using namespace std;
int change(char *t)
{if(*t<='9'&&*t>='0')
{ int sum=0;
for(;*t<='9'&&*t>='0';t++)
{
   
    sum=sum*10+(*t-'0');
   
} return sum;
}
else
{
    exit(0);
}


}
int main(int argc, char *argv[]){
    int t=change(argv[1]);
    int j=change(argv[2]);
    cout<<"鸡有"<<2*t-j/2<<"只"<<endl;
    cout<<"兔有"<<j/2-t<<"只"<<endl;
    return 0; 
}