#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(unsigned(time(NULL)));
    int n=0;
    cout<<"请输入你需要的随机数个数：";
    cin>>n;
    int *p=new int[n];
    if(p==NULL)
    {
        cout<<"error"<<endl;
        exit(-1);
    }
    for(int i=0;i<n;i++)
    {
        p[i]=rand()%100;
        cout<<p[i]<<endl;
    }
    delete []p;
    p=NULL;
    return 0;

    
}