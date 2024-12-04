#include"iostream"
using namespace std;
int main()
{
  int arr[5]={1,2,3,4,5};
  int *p=begin(arr);
  for(;p!=end(arr);p++)
  {
    cout<<*p<<endl;
  }
}