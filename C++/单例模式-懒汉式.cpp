#include"iostream"
using namespace std;

class Singleton
{
public:
static Singleton& getInstance()
{
    if(s_instance==NULL)//����������ڴ棬����Ͳ��ᱻ�������������ʽ��ͬ
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
    cout<<"������������"<<endl;
}
Singleton(const Singleton&)=delete;
~Singleton()
{
    cout<<"���ٵ�������"<<endl;
}
static Singleton* s_instance;
static int s_count;
int m_data;
};
Singleton* Singleton::s_instance=NULL;
int Singleton::s_count=0;
int main()
{
    cout<<"main ������ʼ"<<endl;
    Singleton &s = Singleton::getInstance();
    Singleton &s1 = Singleton::getInstance();
    cout<< &s <<endl;
    cout<< &s1 <<endl;
    s.print();
    s1.release();
    s.release();
    return 0;
}