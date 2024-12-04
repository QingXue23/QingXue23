#include"iostream"
using namespace std;
class Student
{
    public:
   void fun()const
    {
        cout<<"const"<<endl;
    }
    void fun()
    {
  cout<<"non-const"<<endl;
    }
};
int main()
{
          Student s;
    const Student s1;
    s.fun();
    //s1.fun();
    return 0;
}