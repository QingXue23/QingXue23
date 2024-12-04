#include"iostream"
using namespace std;

class Singleton
{
public:
static Singleton& getInstance()
{
    if(s_instance==NULL)//如果不分配内存，对象就不会被创建，这与饿汉式不同
    {
        s_instance=new Singleton(54321);
    }
    ++s_count;
    return *s_instance;
}
void release()
{
    --s_count;
    if(s_count==0)
    {
        delete s_instance;
        s_instance=NULL;
        cout<<s_count<<endl;
    }       
}
void print()
{
    cout<<m_data<<endl;
}
private:
Singleton(int data = 0) : m_data(data) 
{
    cout<<"创建单例对象"<<endl;
}
Singleton(const Singleton&)=delete;
~Singleton()
{
    cout<<"销毁单例对象"<<endl;
}
static Singleton* s_instance;
static int s_count;
int m_data;
};
Singleton* Singleton::s_instance=NULL;
int Singleton::s_count=0;
int main()
{
    cout<<"main 函数开始"<<endl;
    Singleton &s = Singleton::getInstance();
    Singleton &s1 = Singleton::getInstance();
    cout<< &s <<endl;
    cout<< &s1 <<endl;
    s.print();
    s1.release();
    s.release();
    return 0;
}