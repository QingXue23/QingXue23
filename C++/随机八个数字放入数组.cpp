#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;
int main(){
    srand(unsigned(time(NULL)));
    int n=0;
    cout<<"请输入你需要的随机数个数：";
    cin>>n;
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        cout<<"error"<<endl;
        exit(-1);
    }
    memset (p,0,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        p[i]=rand()%100;
        cout<<p[i]<<endl;
    }
    free(p);

     
}