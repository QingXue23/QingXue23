#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
    int a = 0;
    cin>>a;
  int*p =  (int*) malloc  (a*sizeof(int));
  if (p == NULL)
  {
      cout<<"error"<<endl;
      exit(1);
  }
  memset(p,0,a * sizeof(int));
  for (int i=0;i<a;i++)
  {
    p[i] = i+1;  
    }
  for (int i=0;i<a;i++)
  {
    cout<<p[i]<<endl;
  }
  free(p);
  return 0;
}


